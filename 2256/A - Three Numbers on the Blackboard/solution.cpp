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
 int maxi=max(a,max(b,c));
    int mini=min(a,min(b,c));
       if(a==b&&b==c&&c==a){
           cout<<0<<endl;
       }
        else{
            int d=a+b;
            int e=a+c;
            int f=b+c;
            if(d<maxi)
            cout<<d-mini<<endl;
            else if(e<maxi)
            cout<<e-mini<<endl;
            else if(f<maxi)
            cout<<f-mini<<endl;
            else
            cout<<maxi-mini<<endl;
        } 
   }
 
    return 0;
}