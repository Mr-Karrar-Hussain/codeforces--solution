#include <iostream>
#include<string>
using namespace std;
 
 
int main() {
    // Write C++ code here
int test;
cin>>test ;
string  name;
 
 
while(test--){
    cin>>name ;
   if(name.length()>10){
 cout<<name[0] <<name.length()-2<<name[name.length()-1]<<endl;
}else{
    cout<<name<<endl;
}
}
    return 0;
}