#include <iostream>
using namespace std;
 
int main() 
{  
    int t;
    cin>>t;
    while(t--){
    int n; 
    cin>>n;
  int   min_digit=9;
   while(n>0){
     
    int  rem = n%10;
   if(rem<min_digit){
    min_digit=rem;
   }
n=n/10;
   }
   cout<<min_digit<<endl;
    }
 
 
    return 0;
}