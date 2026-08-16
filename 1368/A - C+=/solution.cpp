// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--){
int a,b,n;
cin>>a>>b>>n;
int count=0;
while(a<=n && b<=n){
    if(a<b)
     a+=b;
    else
     b+=a;
count++;
}
cout<<count<<endl;
 
    }
    return 0;
}