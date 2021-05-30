/*https://codeforces.com/contest/289/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a = 0;
    int l, r;
    while(n--){
        cin >> l >> r;
        a += r - l + 1;
    }
    if(a%k == 0) cout << '0' << endl;
    else cout << k - (a%k) << endl;

    terminate;
}