// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
 
int main() {
    // Write C++ code here
   int test;
   cin>>test;
   int m,n;
   while(test--){
      cin>>n>>m;
      int num;
      if(n>m){
          num=n;
          cout<<m<<" "<<num<<endl;
      }else{
          num=m;
          cout<<n<<" "<<num<<endl;
      }
      
   }
    return 0;
}