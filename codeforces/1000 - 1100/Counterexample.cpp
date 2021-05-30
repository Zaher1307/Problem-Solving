/*https://codeforces.com/contest/483/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    long long l, r; cin >> l >> r;
    if(r - l == 2){
        if(l % 2 == 0) cout << l << ' ' << l+1 << ' ' << l+2 << endl;
        else cout << "-1" << endl;
        
    }else if(r - l > 2){
        if(l % 2 == 0) cout << l << ' ' << l+1 << ' ' << l+2 << endl;
        else cout << l+1 << ' ' << l+2 << ' ' << l+3 << endl;
    }else{
        cout << "-1" << endl;
    }
    return 0; 
}