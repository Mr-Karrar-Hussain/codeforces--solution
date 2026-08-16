// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    int test;
    cin>>test;
    string   str;
    
    
   while(test--){
            cin>>str;
 
        for(int i=0; i<str.length(); i++){
        if(str[i]=='0'){
            str.erase(i,1); 
            break;
        }
            
        }
        for(int i=0; i<str.length(); i++){
         if(str[i]=='1'){
            str.erase(i,1);
        
            break;
        }
        }
    cout<<str<<endl;
    }
    return 0;
}