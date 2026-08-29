#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,count=0, count1=0 ;
        for(int i=1; i<=2*n; i++){
            cin>>a;
       if(a%2==0){
        count++;
       }
       else if(a%2==1){
      count1++;
       }
        }
        if (count==count1){
            cout<<"YES"<<endl;
 
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}