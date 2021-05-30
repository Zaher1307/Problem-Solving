/*https://codeforces.com/contest/43/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    string s, s1, s2;
    int hash[2]={0};

    cin >> s;
    s1 = s;
    hash[0]++;
    n--;
    while(n--){
        cin >> s;
        if(s == s1){
            hash[0]++;
        }
        else{
            s2 = s;
            hash[1]++;
        }
    }

    if(hash[0] > hash[1]){
        cout << s1 << endl;
    }else{
        cout << s2 << endl;
    }

    return 0; 
}