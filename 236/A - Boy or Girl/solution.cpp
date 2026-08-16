#include <iostream>
#include <string>
using namespace std;
int countDistinct(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i++){
        bool found = false;
        for (int j = 0; j < i; j++){
            if (s[i] == s[j]){
         found = true;
           break;
            }
        }
        if (!found)
      count++;
    }
    return count;
}
int main(){
    string name;
    cin >> name;
    int distinct = countDistinct(name);
    if (distinct % 2 == 0)
    cout << "CHAT WITH HER!";
    else
     cout << "IGNORE HIM!";
    return 0;
}