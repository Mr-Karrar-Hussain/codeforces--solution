// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    // Write C++ code here
   int test ;
   cin>>test;
   while(test--){
       int n;
       cin>>n;
       int arr[n];
       int max=INT_MIN,max1;
       for(int i=0; i<n; i++){
           cin>>arr[i];
           if(arr[i]>max){
               max1=max;
               max=arr[i];
              
           }else if(arr[i]>max1){
               max1=arr[i];
           }
       }
        for(int i=0; i<n; i++){
            if(arr[i]==max){
                arr[i]=max-max1;
                cout<<arr[i]<<" ";
            }else{
                arr[i]=arr[i]-max;
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
       
       
       
   }
    return 0;
}