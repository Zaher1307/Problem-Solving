/*https://codeforces.com/contest/707/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n, m; cin >> n >> m;
    string s = "#Black&White";
    for(int i = 0; i < n*m; ++i){
        char ch; cin >> ch;
        if(ch == 'C' || ch == 'M' || ch == 'Y'){
            s = "#Color";
        }
    }

    cout << s << endl;

    return 0; 
}