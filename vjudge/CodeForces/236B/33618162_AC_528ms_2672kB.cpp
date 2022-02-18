/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t;while (t--)
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}

map<int, int> dp;

ll d (int n) {
    if (dp[n] != 0) return dp[n];
    int i;
    ll sum = 0;
    for (i = 1; i * i < n; ++i) {
        if (n % i == 0) {
            sum += 2;
        }
    }
    if (i * i == n) {
        sum++;
    }
    dp[n] = sum;
    return sum;
}

int main () {
    IO();
    int a, b, c; cin >> a >> b >> c;
    ll sum = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                sum += d(i * j * k) % 1073741824;
                sum %= 1073741824;
            }
        }
    }
    cout << sum << endl;
    terminate;
}
