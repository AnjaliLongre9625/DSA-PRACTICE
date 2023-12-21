#include<iostream>
using namespace std;
int main (){ 

    int n;
    cout<<"enter a no:";
    cin>>n;

    int d=2;
    bool divided=false;
    while(d<n){
    if(n%2==0){
    divided=true;
    break;
}    d++;
    }
    if(divided){
    cout<<"not prime";
}
else{
    cout<<"prime";
}

return 0;
}
  
