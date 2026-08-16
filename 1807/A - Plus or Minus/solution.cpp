// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int l;
    cin>>l;
    while(l--){
        int a,b,c;
        cin>>a>>b>>c;
        int d;
        d=a+b;
        
        if(d==c){
            cout<<"+"<<endl;
        }else{
            cout<<"-"<<endl;
        }
    }
 
        
        
    
    return 0;
}