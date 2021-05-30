/*https://codeforces.com/contest/265/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    string s1, s2; cin >> s1; cin >> s2;
    int p = 0;
    for(int i = 0; i < s2.size(); ++i){
        if(s2[i] == s1[p]) p++;
    }

    cout << p + 1 << endl;
    return 0; 
}