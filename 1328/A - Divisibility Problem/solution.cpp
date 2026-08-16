// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int test;
    cin>>test;
 long long a, b;
//   int count=0;
  for(int i=0; i<test; i++){
  cin>>a>>b;
  if(a%b==0){
      cout<<0<<endl;
      
  }  
 
  else{
       cout<<b-(a%b)<<endl;
    }
  }
 
    return 0;
}