  #include <iostream>
#include <climits>
using namespace std;
 
int main() {
    int test;
    cin >> test;
    
    for(int t = 0; t < test; t++) {
        int n;
        cin >> n;
        
        int arr[n];
        int max_h = INT_MIN;
        int min_h = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] > max_h) max_h = arr[i];
            if(arr[i] < min_h) min_h = arr[i];
        }
        
        
        int result = max_h - min_h+1;
        
        cout << result << endl;
    }
    return 0;
}