// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void isprime(int a){
    int count=0;
for(int i=2;i<a; i++){
    if(a%i==0){
        count++;
    }
}
if(count>0){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}
}
 
 
int main() {
   int test;
   cin>>test;
   while(test--){
       int n;
       cin>>n;
      int  x=2,y=n+1;
isprime(y);
    
   }
    return 0;
}