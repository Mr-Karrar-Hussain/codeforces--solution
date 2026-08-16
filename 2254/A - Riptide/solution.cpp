#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
 
        int count= 0;
 
        while (true) {
           
            if (a == b || b == c || a == c) {
                cout<<count<<endl;
                break;
            }
 
        
            if (a>b && a>c) {
                if (b<c) {
                    a--;
         b++;
                } else {
                   a--;
                    c++;
                }
            }
       else if (b>a &&b>c) {
     if (a<c) {
               b--;
                  a++;
        } else {
                  b--;
                   c++;
        }
        }
            else { 
        if (a<b) {
                 c--;
                  a++;
        } else {
            c--;
        b++;
      }
    }
 
            count++;
        }
    }
 
    return 0;
}