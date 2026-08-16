// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    string str1;
    cin>>str1;
    int num=0;
    int num1=0;
    for(int i=0; i<str1.length(); i++){
        if(str1[i]>='a'&&str1[i]<='z'){
            num++;
        }else if(str1[i]>='A'&&str1[i]<='Z'){
            num1++;
        }
    }
    for(int i=0; i<str1.length(); i++){
  if(num1<=num){
     str1[i]=tolower (str1[i]);
  }
    else if(num1>num){
        str1[i]=toupper(str1[i]);
    }
    }
    cout<<str1;
    return 0;
}