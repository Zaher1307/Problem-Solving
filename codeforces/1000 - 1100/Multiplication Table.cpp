/*http://codeforces.com/problemset/problem/577/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "
#define ll long long

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int cnt = 0;

    if(x == 1){
        cout << 1 << endl;
        terminate;
    }

    for(int i = 1; i <= n; ++i){
        if(x % i == 0 && x / i <= n){
            cnt++;
        }
    }

    cout << cnt << endl;
    terminate;
}
