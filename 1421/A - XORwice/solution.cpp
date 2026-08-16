// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n;
   cin>>n;
   while(n--){
       int a,b,x;
       cin>>a>>b;
       
       x=a&b;
       cout<<(a^x)+(x^b)<<endl;
   }
    return 0;
}