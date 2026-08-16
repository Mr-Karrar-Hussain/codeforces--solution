#include <iostream>
#include<climits>
using namespace std;
int main() {
    // Write C++ code here
    int test;
    cin>>test;
   
    while(test--){
   int n;
    cin>>n;
    int arr[n];
    int min=INT_MAX;
      int p;
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
        if(arr[i]<min){
            min=arr[i];
      p=i;
        }
    }
   arr[p]=arr[p]+1;
     int product=1;
     for(int i=0 ; i<n; i++){
        
         product = product*arr[i];
     }
         cout<<product<<endl;
     
         
    }
 
    
    return 0;
}