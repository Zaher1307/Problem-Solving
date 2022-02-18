/*problem link: https://vjudge.net/problem/UVA-524*/

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)a.size())
#define all(a) a.begin(), a.end()
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}
const int N = 1001;
int a[N], b[N];
int n, k;

int can (int mx) {
    int kk = k;
    for (int i = 0; i < n; ++i) {
        if (a[i] * mx <= b[i]) {
            continue;
        } else if ((a[i] * mx) <= b[i] + kk) {
            kk -= a[i] * mx - b[i];
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}

int main () {
    IO ();
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int mx = 1;
    while (can(mx)) mx++;
    cout << mx - 1 << endl;
    
    terminate;
}