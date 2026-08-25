#include <iostream>
 
using namespace std;
 
int main() 
{ int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
    long long z=y-x;
    if(z>x && z<y && z%x==0 && z%y!=0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  
}
    return 0;
}