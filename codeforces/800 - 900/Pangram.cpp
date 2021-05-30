/*https://codeforces.com/contest/520/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int hash[26]{0};
    
    if(n < 26){
        cout << "NO" << endl;
        return 0;
    }
    

    for(int i = 0; i < n; ++i){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            hash[s[i] - 'A']++;
        }
        else{
            hash[s[i] - 'a']++;
        }
    }


    for(int i = 0; i < 26; ++i){
        if(hash[i] == 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0; 
}