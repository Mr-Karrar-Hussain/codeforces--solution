// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int test;
  cin>>test;
  int size;
 
 
  while(test--){
       cin>>size;
  int arr[size];
  for(int i=0; i<size; i++){
      cin>>arr[i];
  }
   int e_count=0,o_count=0;
    for(int i=0; i<size; i=i+2){ 
        if(arr[i]%2!=0){
            e_count++;
        }
        }for(int i=1; i<size; i=i+2){
            if(arr[i]%2!=1){
                o_count++;
            }
        }
         if(e_count==o_count){
        cout<<e_count<<endl;
          }
    else if(e_count!=o_count){
        cout<<-1<<endl;
    }
    }
   
    return 0;
}