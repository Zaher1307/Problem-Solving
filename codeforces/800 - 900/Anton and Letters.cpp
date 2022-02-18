/*https://codeforces.com/contest/443/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    string s; 
    getline(cin, s);
    set<char> s1;

    for(int i = 0; i < s.size(); ++i){
        if(isalpha(s[i])){ s1.insert(s[i]);}
    }

    cout << s1.size() << endl;
    return 0; 
}