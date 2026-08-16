// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
      int n,c=0,d=0;
      string str;
      cin>>n;
      cin>>str;
      int i=0;
      while(n--){
          if(str[i]=='A'){
              c++;
          }else if(str[i]=='D'){
              d++;
          }
          i++;
      }
      if(c>d){
          cout<<"Anton";
      }else if(c<d){
          cout<<"Danik";
      }else{
          cout<<"Friendship";
      }
    return 0;
}