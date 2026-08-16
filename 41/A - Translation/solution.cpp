// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
     string str1,str2,reverse="";
     cin>>str1;
     cin>>str2;
     for(int i=str2.length()-1; i>=0;i--){
         reverse=reverse+str2[i];
     }
     if(str1==reverse){
         cout<<"YES";
     }else{
         cout<<"NO";
     }
    return 0;
}