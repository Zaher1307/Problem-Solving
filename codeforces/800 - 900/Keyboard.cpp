/*https://codeforces.com/contest/474/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c; cin >> c;
    string s; cin >> s;

    if (c == 'R'){
        for(int i = 0; i < s.size(); ++i){
            s[i] = k[k.find(s[i]) - 1];
        }
    }
    else{
        for(int i = 0; i < s.size(); ++i){
            s[i] = k[k.find(s[i]) + 1];
        }
    }
    cout << s << endl;
    return 0; 
}