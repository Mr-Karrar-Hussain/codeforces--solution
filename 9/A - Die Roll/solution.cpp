#include <iostream>
using namespace std;
int main() {
    int y=0,w=0,result1 ,r=0 ,m=6;
    cin>>y>>w;
    if(y>=w){
    result1=y;
    }else{
    result1=w;
    }         
    while(result1<=m){
    r++;
    result1++;
    
    }if(r==6){
        cout<<1<<"/"<<1;
        return 0;
    }
    
    else if(r%2==0){
    r=r/2;
    m=m/2;
    cout<<r<<"/"<<m<<endl;
    }else if(r%3==0){
    m=m/3;
    r=r/3;
    cout<<r<<"/"<<m<<endl;
    }else{
    cout<<r<<"/"<<m<<endl;
    }
    return 0;
}