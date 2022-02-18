/*https://codeforces.com/problemset/problem/478/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int total = a + b + c + d + e;
    if(a + b + c + d + e == 0){
        cout << -1 << endl;
    }else if(total % 5 == 0){
        cout << total / 5 << endl; 
    }else{
        cout << -1 << endl;
    }
    terminate; 
}
