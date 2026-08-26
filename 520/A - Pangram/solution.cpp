#include <iostream>
using namespace std;
 
int main() 
{   
    int n; 
    cin>>n;
    string str;
    cin>>str;
    int count=0; 
    string str1 = "abcdefghijklmnopqrstuvwxyz";
   for(int i=0; i<26; i++){
    for(int j=0; j<n; j++){
     if(str1[i] == tolower(str[j])){
        count++;
        break;
     }
    }
   }
   if(count>=26){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
 
    
    return 0;
}