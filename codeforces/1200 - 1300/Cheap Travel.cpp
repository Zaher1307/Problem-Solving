/*https://codeforces.com/problemset/problem/466/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int n, m, a, b; cin >> n >> m >> a >> b;
    int cost = 0;
    if(n % m == 0 && (n / m) * b < n * a){
        cost = (n / m) * b;
    }else if(m > n && b < n * a){
        cost = b; 
    }else if(n % m != 0 && (n / m) * b + (n % m) * a < n * a && a > b){
        cost = ceil((float)n / m) * b;
    }else if(n % m != 0 && (n / m) * b + (n % m) * a < n * a){
        cost = (n / m) * b;
        cost += (n % m) * a;
    }else{
        cost = n * a;
    }

    cout << cost << endl;

    terminate; 
}
