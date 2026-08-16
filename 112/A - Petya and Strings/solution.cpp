// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    string str1,str2;
    cin>>str1>>str2;
    int num=0;
    for(int i=0; i<str1.length(); i++){
        str1[i]=toupper(str1[i]);
        str2[i]=toupper(str2[i]);
    }
    for(int i=0; i<str1.length(); i++){
        
        if(str1[i]>str2[i]){
            num=1;
            break;
            
        }else if(str2[i]>str1[i]){
            num=-1;
            break;
        }
       
    // cout<<num;
    
    }
    cout<<num;
    
    return 0;
}