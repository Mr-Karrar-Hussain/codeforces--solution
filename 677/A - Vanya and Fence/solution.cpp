#include <iostream>
using namespace std;
int main() {
    int n=0,h=0,min_h=0,min=0,min_i=0;
    cin>>n;
    cin>>h;
    int arr[n]={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>h){
            min_h=min_h+2;
        }else{
            min_i=min_i+1;
        }
        min=min_h+min_i;
    }
    cout<<min;
    return 0;
}