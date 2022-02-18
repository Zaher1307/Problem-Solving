/*https://codeforces.com/contest/1/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    double n, m, a; cin >> n >> m >> a;
    cout << to_string((long long)(ceil(m/a) * ceil(n/a))) << endl;
    
    
    return 0; 
}