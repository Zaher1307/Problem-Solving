/*https://codeforces.com/contest/799/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n, t, k, d; cin >> n >> t >>  k >> d;
    int ft = 0;

    ft = (ceil((double)n/k))*t;
    if(ft-d > t) cout << "YES" << endl; 
    else cout << "NO" << endl; 


    return 0; 
}