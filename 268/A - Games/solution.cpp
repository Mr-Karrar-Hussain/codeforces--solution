#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
      cin>>n;
      int arr1[n],arr2[n];
      int count=0;
      for(int i=0; i<n; i++){
          cin>>arr1[i]>>arr2[i];
      }
      
        for(int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if(arr1[i]==arr2[j]){
                    count++;
                }  
}
     }  
      
cout<<count;
    return 0;
}