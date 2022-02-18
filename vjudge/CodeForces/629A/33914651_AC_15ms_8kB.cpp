/*problem link: */

#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

#define space ' '
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t; while (t--)
#define terminate return 0

/**************************************************************************************************/
/***/std::chrono::system_clock::time_point start;                                                /***/
/***/void end () {                                                                               /***/
/***/#ifdef ZAHER                                                                                /***/
/***/    auto stop = high_resolution_clock::now();                                               /***/
/***/    auto duration = duration_cast<microseconds>(stop - start);                              /***/
/***/    cout << duration.count() * 1e-6 << " second" << endl;                                   /***/
/***/#endif                                                                                      /***/
/***/}                                                                                           /***/
/***/void IO () {                                                                                /***/
/***/    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);        /***/
/***/#ifdef ZAHER                                                                                /***/
/***/    freopen ("../in.txt", "r", stdin);                                        /***/
/***/    freopen ("../out.txt", "w", stdout);                                      /***/
/***/    start = high_resolution_clock::now();                                                   /***/
/***/#endif                                                                                      /***/
/***/}                                                                                           /***/
/************************************************************************************************/

ll power (ll x, ll n, ll mod) {
    if (n == 1) return x;
    if (n & 1) return ((x % mod) * power(((x % mod) * (x % mod)) % mod, n / 2, mod)) % mod;
    else return power(((x % mod) * (x % mod)) % mod, n / 2, mod);
}

ll gcd (ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

ll lcm (ll a, ll b) {
    return a * b / gcd(a, b);
}

/******************************************************************************************/

int nCr (int n, int r) {
    double res = 1;
    for (int i = 1; i <= r; ++i) {
        res = res * (n - r + i) / i;
    }
    return (int)(res + 0.01);
}


int main () {
    IO();
//    ull c[60][60];
//    for (int i = 0; i < 60; ++i) {
//        c[i][i] = c[i][0] = 1;
//    }
//    for (int i = 1; i < 60; ++i) {
//        for (int j = 1; j < 60; ++j) {
//            c[i][j] = c[i-1][j-1] + c[i-1][j];
//        }
//    }
    int n; cin >> n;
    bool v[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char c; cin >> c;
            if (c == 'C') {
                v[i][j] = true;
            } else {
                v[i][j] = false;
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ll row = 0, col = 0;
        for (int j = 0; j < n; ++j) {
            if (v[i][j]) {
                row++;
            }
            if (v[j][i]) {
                col++;
            }
        }
        if (row) {
            row = (row * (row - 1)) / 2;
        } else {
            row = 0;
        }
        if (col) {
            col = (col * (col - 1)) / 2;
        } else {
            col = 0;
        }
        ans += row + col;
    }
    cout << ans << endl;
    end();
    terminate;
}
