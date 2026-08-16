// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n;
   cin>>n;
   while(n--){
    int m;
    cin>>m;
    int arr[m],index;
     int  c;
     for(int i=1; i<=m ; i++){
        cin>>arr[i];
     }
     if(arr[1]==arr[2]){
         c=arr[1];
     }else if(arr[1]==arr[3]){
         c=arr[1];
     }else{
         c=arr[2];
     }
     for(int i=1; i<=m ; i++){
        if(arr[i]!=c){
            index=i;
        }
    }
    cout<<index<<endl;
   }
    return 0;
}