/*https://codeforces.com/contest/764/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int n, m, z; cin >> n >> m >> z;
    int gcd = __gcd(m, n);
    int met = n * m / gcd;
    int res = z / met;

    cout << res << endl;
    terminate; 
}
