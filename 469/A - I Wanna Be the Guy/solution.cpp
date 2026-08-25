#include <iostream>
#include<algorithm>
using namespace std;
void fun(int ptr[], int n, int t){
  int count=0;
 
for(int i=1; i<=t ; i++){
    for(int j=0; j<n;j++ ){
  if(i==ptr[j]){
  count++;
    break;
  }
}
}
if(count ==t){
    cout<<"I become the guy.";
}else{
    cout<<"Oh, my keyboard!";
}
 
}
int main() 
{
    int t,n,m;
   
    cin>>t>>n;
    int arr[n];
 
    for(int i=0; i<n; i++){
 
        cin>>arr[i];
    
    }
    cin>>m;
   
   
    int arr1[m];
    for(int i=0; i<m ; i++){
        cin>>arr1[i];
        
    }
    int j=0;
    int s=n+m;
    int ptr[s];
    for(int i=0; i<s; i++){
     if(i<n){
        ptr[i]=arr[i];
     }else{
        ptr[i]=arr1[j++];
     }
    }
    fun(ptr,s,t);
    
    
    return 0;
}