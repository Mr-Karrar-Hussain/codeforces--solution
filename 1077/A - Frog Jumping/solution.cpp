// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
 
 
int main(){
int t;
cin>>t;
while(t--){
long long a,b,k;
cin>>a>>b>>k;
// for(int i=1; i<=k; i++) {
long long  sum=0;
  sum =(k/2)*(a-b);
 
    if(k%2!=0){
       
    sum=sum+a;
    }
 
cout<<sum<<endl;
}
}