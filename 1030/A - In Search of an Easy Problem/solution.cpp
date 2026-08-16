#include <iostream>
using namespace std;
 
int main() {
    // Write C++ code here
    int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     bool check=false;
     for(int i=0; i<n; i++){
         if(1==arr[i]){
             check=true;
             break;
         }
     }
         if(check){
             cout<<"HARD";
         }else{
             cout<<"EASY";
         }
         
         
    return 0;
}