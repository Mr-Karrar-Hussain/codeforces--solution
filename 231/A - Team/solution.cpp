#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,a,b,c;
    int count=0;
    cin>>n;
    for(int i=0; i<n; i++){
         cin>>a;
         cin>>b; 
         cin>>c;
 
if(a>0&&b>0||b>0&&c>0||a>0&&c>0){
    count++;
}
    }
cout<<count;
    return 0;
}