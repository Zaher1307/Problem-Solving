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
int const MOD = 1000000007;

ll mod_inverse(ll n, ll mod) {
    return power(n, mod - 2, mod);
}

vector<ll> fact(1000005,1);

void factorial () {
    for (ll i = 2; i <= 1000000; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

ll nCr (ll n, ll r) {
    if (r == 0) return 1;
    if (n == r) return 1;
    ll res = 1;
    for (ll i = n - r + 1; i <= n; ++i) {
        res = (res * i) % MOD;
    }
    for (ll i = 1; i <= r; ++i) {
        res = (res * (mod_inverse(i, MOD) % MOD)) % MOD;
    }
    return res;
}


int main () {
    IO();
    factorial();
    int n;
    while (cin >> n && n) {
        vector<int> temp(n);
        vector<int> st(n);
        for (auto &item : st) cin >> item;
        vector<int> end(n);
        for (auto &item : end) cin >> item;
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            temp[i] = end[i] - st[i];
            ans += temp[i];
        }
        ans = fact[ans];
        for (int i = 0; i < n; ++i) {
            ans = (ans * mod_inverse(fact[temp[i]], MOD) % MOD) % MOD;
        }
        cout << ans<< endl;

    }
    end();
    terminate;
}






//    ull c[60][60];
//    for (int i = 0; i < 60; ++i) {
//        c[i][i] = c[i][0] = 1;
//    }
//    for (int i = 1; i < 60; ++i) {
//        for (int j = 1; j < 60; ++j) {
//            c[i][j] = c[i-1][j-1] + c[i-1][j];
//        }
//    }
