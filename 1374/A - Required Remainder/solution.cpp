// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int test;
   cin>>test;
   int x,y,n,k;
   for(int i=0; i<test; i++){
       cin>>x>>y>>n;
     
     k=n-(n%x)+y;
        if(k>n){ 
      k=k-x;
        }
cout << k << endl;  
            
           
       }
       
       
   
    return 0;
}