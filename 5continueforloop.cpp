#include<iostream>
using namespace std;
int main (){ 

   int i=1;
   while(i<10){
       
       if(i==7){
       i++;
       continue;
       }
       cout<<i<<endl;
       i++;
   }
   for(int j=1;j<10;j++){  //break" is used to exit from the current loop.//
//return" statement is used to exit from the current function.
//continue" is used to skip the current iteration of a loop and continue with the next iteration.//
     if(j==7){
         continue;
     }
     cout<<j<<endl;
     } 
       
return 0;
}
  
