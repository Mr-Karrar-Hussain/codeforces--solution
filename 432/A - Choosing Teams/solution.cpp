#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num,k;
    cin>>num>>k;
    int arr[num];
    int c=0;
    for(int i=0; i<num; i++){
        cin>>arr[i];
        if(arr[i]+k<=5){
            c++;
        }
    }
    c=c/3;
    cout<<c;
    return 0;
}