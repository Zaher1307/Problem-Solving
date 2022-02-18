/*https://codeforces.com/contest/233/problem/B*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define ull unsigned long long
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std; 

ll sumOfDigits(int num){
    ll sum = 0;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
  

int main(){
    // freopen("../../in.txt", "r", stdin);
    // freopen("../../out.txt", "w", stdout);
    IO;
    
    //x * x + sum * x = n

    ll n; cin >> n;
    for(int b = 1; b <= 81; ++b){
        ll sq = sqrt(b * b + 4 * n);
        if(sq * sq == b * b + 4 * n){
            ll root = (sq - b) / 2;
            if(root > 0 && sumOfDigits(root) == b){
                cout << root << endl;
                terminate;
            }
        }
    }

    cout << -1 << endl;

    terminate; 
}
