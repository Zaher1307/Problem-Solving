/*https://codeforces.com/contest/365/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n, k; cin >> n >> k;
    int ctr = 0;
    set <char> s1;
    string s;
    while(n--){
        cin >> s;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] - '0' <= k){
                s1.insert(s[i]);
            }
        }
        if(s1.size() >= k+1){
            ctr++;
        }
        s1.clear();
    }

    cout << ctr << endl;
    
    return 0; 
}