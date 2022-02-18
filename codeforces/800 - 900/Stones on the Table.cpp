/*https://codeforces.com/contest/266/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n = 0; cin >> n;
    string s; cin >> s;
    int res = 0;
    for(int i = 0; i < n - 1; ++i){
        if(s[i] == s[i + 1]) res++;
    }
    cout << res << endl;
    return 0; 
}