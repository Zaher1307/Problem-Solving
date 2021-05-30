/*https://codeforces.com/contest/431/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int arr[4], res = 0;
    for(int i = 0; i < 4; ++i){
        cin >> arr[i]; 
    }
    string s; cin >> s;
    for(int i = 0; i < s.size(); ++i){
        res += arr[s[i] - '0' - 1];
    }
    cout << res << endl;

    return 0; 
}