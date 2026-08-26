#include <iostream>
using namespace std;
void fun(int n, int m){
if(n==1 && m==1){
    cout<<1<<endl;
}else{
    cout<<m-n<<endl;
}
};
int main() 
{
    int t;
    cin>>t;
    while(t--){
     int x,y;
     cin>>x>>y;
     fun(x,y);
    }
 
       return 0;
}