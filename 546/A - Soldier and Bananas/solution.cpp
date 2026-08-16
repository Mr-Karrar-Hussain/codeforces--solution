#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int k,n,w,t_dollar=0,dollar,sum=0;
    cin>>k;
    cin>>n;
    cin>>w;
 for(int i=1; i<=w; i++){
     sum=k*i;
     t_dollar=t_dollar+sum;
 }
     if(t_dollar>n){
         dollar=t_dollar-n;
         cout<<dollar;
     } else if(t_dollar<=n){
    cout<<"0"; 
 }
     
 
 
 
     
 
    return 0;
}