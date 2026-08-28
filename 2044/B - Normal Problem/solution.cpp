#include <iostream>
using namespace std;
 
int main() 
{    int t;
     cin>>t;
     while(t--){ 
    string str1;
    cin>>str1;
    
    for(int i=str1.length()-1; i>=0 ;i--){
        if(str1[i]=='p' ){
            cout<<'q';
        }
        else if(str1[i]=='q'){
             cout<<'p';
        }
        else{
           cout<<str1[i];
        }
    }
    cout<<endl;
     }
    return 0;
}