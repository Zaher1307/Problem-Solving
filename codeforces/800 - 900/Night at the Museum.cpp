/*https://codeforces.com/contest/731/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int mov = 0, p = 0, res = 0;
    char arr[26];
    for(int i = 0; i < 26; ++i){
        arr[i] = 'a' + i;
    }

    string s; cin >> s;
    for(int i = 0; i < s.size(); ++i){
        int index = s[i] - 'a';
        if(abs(index - p) <= 13) {res += abs(index - p);p = index;}
        else {res += 26 - abs(index - p); p = index;}
        
    }
    
    cout << res << endl;

    return 0; 
}