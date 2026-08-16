#include <iostream>
#include<string>
using namespace std;
 
int main(){
    int test ;
    cin>>test;
    int result1=0,result2=0;
    int x=0,y=0;
    if(test%2==0){
        result1=4;
        result2=test-result1;
        cout<<result1<<" "<<result2;
    }
    else{
         x=9;
         y=test-x;
         cout<<y<<" "<<x;
    }
    return 0;
}