#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
   int test;
   cin>>test;
   string colour;
   cin>>colour;
   int count=0;
   for(int i=0; i<colour.length(); i++){
       if(colour[i]==colour[i+1]){
           count++;
       }
   }
   cout<<count;
    return 0;
}