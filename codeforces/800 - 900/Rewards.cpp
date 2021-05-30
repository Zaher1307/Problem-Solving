/*https://codeforces.com/problemset/problem/448/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int a1, a2, a3; cin >> a1 >> a2 >> a3;
    int b1, b2, b3; cin >> b1 >> b2 >> b3;
    int c = a1 + a2 + a3;
    int m = b1 + b2 + b3;
    int n; cin >> n;
    int cnt = 0;
    cnt += (c + 5 - 1) / 5;
    cnt += (m + 10 - 1) / 10; 

    if(cnt > n){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

    terminate; 
}
