#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
     int  test ;
    float sum=0 ,result ;
    cin >> test ;
    int arr[test] = {} ;
    for(int i = 0 ; i < test ; i++ ){
        cin >> arr[i] ;
    }
    for(int i = 0 ; i < test ; i++ ){
        sum = sum + arr[i] ;
        result = sum/test;
}
cout << result ;
    return 0;
}