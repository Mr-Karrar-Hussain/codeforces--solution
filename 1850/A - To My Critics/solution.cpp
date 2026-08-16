// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int test;
  cin>>test;
  int a,b,c;
  while(test--){
      cin>>a>>b>>c;
     if(a+b>=10||a+c>=10||b+c>=10){
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
  }
    return 0;
}