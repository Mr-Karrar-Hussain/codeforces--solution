// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
 
int main() {
    // Write C++ code here
    int n,k,m;
    cin>>n>>k;
   for(int i=0; i<k ; i++){
       
        if(n%10==0){
            n=n/10;
        }else{
            n=n-1;
        }
        
    }
    cout<<n;
    return 0;
}