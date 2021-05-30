/*https://codeforces.com/contest/749/problem/A?f0a28=1*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int n; cin >> n;
    int k = n / 2;
    cout << k << endl;
    while(n){
        if(n % 2 == 1){
            cout << 3 << space;
            n -= 3;
        }else{
            cout << 2 << space;
            n -= 2;
        }
    }
    cout << endl;
    terminate; 
}
