#include <iostream>
#include <vector>

using namespace std;
bool isSafe(int newx, int newy, vector<vector<bool>> &vis, vector<vector<int>> &arr, int n) {
    return (newx >= 0 && newx < n) && (newy >= 0 && newy < n) &&
           !vis[newx][newy] && arr[newx][newy] == 1;}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &vis, string path) {
    // base case
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return; }

vis[x][y]=1;

   if (isSafe(x + 1, y, vis, arr, n)) {
        solve(x + 1, y, arr, n, ans, vis, path + 'D');
    }
    // LEFT
    if (isSafe(x, y - 1, vis, arr, n)) {
        solve(x, y - 1, arr, n, ans, vis, path + 'L');
    }
    // RIGHT
    if (isSafe(x, y + 1, vis, arr, n)) {
        solve(x, y + 1, arr, n, ans, vis, path + 'R');
    }
    // UP
    if (isSafe(x - 1, y, vis, arr, n)) {
        solve(x - 1, y, arr, n, ans, vis, path + 'U');
    }

    vis[x][y] = 0;
}
vector<string> searchMaze(vector<vector<int>>& arr, int n) {
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";
    if(arr[0][0]==0)
    return ans;
    solve(0, 0, arr, n, ans, visited, path);

    return ans;
}

int main(){
 vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {0, 1, 0, 0},
                                {1, 1, 1, 1}};

    int n = maze.size();
    vector<string> paths = searchMaze(maze, n);

    // Displaying the paths
    for (const auto &path : paths) {
        cout << path << endl;
    }

    return 0;
}
