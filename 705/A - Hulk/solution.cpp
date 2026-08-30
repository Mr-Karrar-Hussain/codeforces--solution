#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    
    cout<<"I hate ";
 
    for(int i=2; i<=t; i++){
        if(i%2==0){
            cout<<"that  I love ";
        }
        else if(i%2!=0){
            cout<<"that I hate ";
        }
    }
    cout<<"it";
    return 0;
}