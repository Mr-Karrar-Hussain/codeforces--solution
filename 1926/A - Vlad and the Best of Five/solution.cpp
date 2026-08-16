// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    // Write C++ code here
    int test;
    cin>>test;
   while(test--){
       int A_count=0,B_count=0;
       string str;
       cin>>str;
       for(int i=0; i<5; i++){
       if(str[i]=='A'){
        A_count++;   
       }
       else{
           B_count++;
       }
   }
   if(A_count>B_count){
       cout<<"A"<<endl;
   }else{
       cout<<"B"<<endl;
   }
   }
    return 0;
}