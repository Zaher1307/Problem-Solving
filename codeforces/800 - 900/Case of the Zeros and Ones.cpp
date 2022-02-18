/*https://codeforces.com/problemset/problem/556/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int ones = 0;
    int zeros = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == '1') ones++;
        else zeros++;
    }
    cout << abs(ones-zeros) << endl;
    terminate; 
}
