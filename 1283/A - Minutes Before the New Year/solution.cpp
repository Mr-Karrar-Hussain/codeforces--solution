// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
 
int main() {
    // Write C++ code here
   int test;
   cin>>test;
   int h ,m;
   while(test--){
       int total_min;
    cin>>h>>m;
   total_min= (24-h)*60-m;
      cout<<total_min<<endl;
   }
    return 0;
}