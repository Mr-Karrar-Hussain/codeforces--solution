// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int test;
  cin>>test;
  while(test--){
  int a,b,c;
  cin>>a>>b>>c;
      if(a==b){
    cout<<c<<endl;
      }
       else if(a==c){
            cout<<b<<endl;
    }else{
          cout<<a<<endl;
    }
  }
    return 0;
}