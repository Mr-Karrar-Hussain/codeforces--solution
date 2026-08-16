#include <iostream>
using namespace std;
int main() {
    // Write C++ code here;
  
   int n;
   cin>>n;
  while(n--){
      
  char c;
  cin>>c;
  string s="codeforces";
  
       if(s.find(c)!=-1){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
  }    
   
   
   
    return 0;
}