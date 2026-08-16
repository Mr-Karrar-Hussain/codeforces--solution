#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // Write C++ code here
    long long n,func=0,ans=0;
    cin>>n;
    
    func=pow(-1,n) * (2*n+1)-1;
    ans=func/4;
    
    cout<<ans;
 
    return 0;
}