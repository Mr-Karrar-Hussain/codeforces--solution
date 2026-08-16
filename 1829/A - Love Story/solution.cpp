#include <iostream>
#include<string>
using namespace std;
 
int main(){
    int test ;
    cin>>test;
    string s,b="codeforces";
    
   while(test--){
       cin>>s;
       int count=0;
       for(int i=0; i<s.length(); i++){
           if(s[i]!=b[i]){
               count++;
           }
       }
       cout<<count<<endl;
   }
    
 
    return 0;
}