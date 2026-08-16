#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int test;
    int a,b,c;
    cin>>test;
    while(test--){
        cin>>a>>b>>c;
       if(a>b+c){
            cout<<"First"<<endl;
        }else if (a==c&&b<a){
            cout<<"First"<<endl;
        }
        else if(a>b&&c==1||a>b&&c%2==0){
            cout<<"First"<<endl;
        }else if(a==b&&c%2!=0||a>b&&c%2!=0){
            cout<<"First"<<endl;
        }else if(a==b&&c%2==0){
            cout<<"Second"<<endl;
        }else {
            cout<<"Second"<<endl;
        }
    }
    return 0;
}