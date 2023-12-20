#include <iostream>
using namespace std;

int length(char input[]){
int count=0;
for(int i=0;input[i]!='\0';i++){
    
    count++;
}
return count;
}

int main ()
{   char input[100];
    
    cin.getline(input,7,'\o');
    cout<<input;
  
}
