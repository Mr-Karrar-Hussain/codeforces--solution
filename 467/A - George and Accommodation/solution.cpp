#include <iostream>
using namespace std;
int main() {
   int n=0;
    cin>>n;
   int p[n]={0},q[n]={0},room=0;
  
   for(int i=0; i<n; i++){
       cin>>p[i]>>q[i];
       if(q[i]-p[i]>=2){
           room++;
       }
       
   }
cout<<room;
    return 0;
}