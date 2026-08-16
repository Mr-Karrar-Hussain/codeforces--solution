// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int n=0;
 cin>>n;
 int arr[n];
 for(int i=0 ; i<n; i++){
      cin>>arr[i];
 }
  int count;
 for(int i=0 ; i<n; i++){
    count=arr[i]/2;
    cout<<count<<" ";
 }
  
 return 0;
}