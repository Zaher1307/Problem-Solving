/*https://codeforces.com/contest/236/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int c = 0;
    string s1;
    cin >> s1;
    set<char> s2;
    for(int i = 0; i < s1.length(); ++i){
        s2.insert(s1[i]);
    }
    s2.size() % 2 ? cout << "IGNORE HIM!" << endl : cout << "CHAT WITH HER!" << endl;
    return 0; 
}