#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
   string name ;
   cin>>name;
   int i=0;
   if(name[i]>='a' &&name[i]<='z'){
       
          name[i] =name[i]-32;
          cout<<name;
          
       }else{
       cout<<name;
       }
    return 0;
}