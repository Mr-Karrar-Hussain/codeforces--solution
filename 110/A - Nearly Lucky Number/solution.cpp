// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
     string n;
     cin>>n;
    int count=0;
     for(int i=0; i<n.length(); i++){
     if(n[i]=='4'||n[i]=='7'){
          count++;
     }
     }
     if(count==4||count==7){
         cout<<"YES";
     }else{
         cout<<"NO";
     }
    return 0;
}