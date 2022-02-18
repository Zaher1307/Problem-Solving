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
/**/std::chrono::system_clock::time_point start;                                                /**/
/**/void end () {                                                                               /**/
#ifdef ZAHER                                                                                    /**/
/**/    auto stop = high_resolution_clock::now();                                               /**/
/**/    auto duration = duration_cast<microseconds>(stop - start);                              /**/
/**/    cout << duration.count() * 1e-6 << " second" << endl;                                   /**/
#endif
/**/}                                                                                           /**/
/**/void IO () {                                                                                /**/
/**/    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);        /**/
#ifdef ZAHER                                                                                    /**/
/**/    freopen ("../in.txt", "r", stdin);                                        /**/
/**/    freopen ("../out.txt", "w", stdout);                                      /**/
/**/    start = high_resolution_clock::now();                                                   /**/
#endif
/**/}                                                                                           /**/
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


int main () {
    IO();
    ull n; cin >> n;
//    cout << n * (n - 1) * (n - 2) << endl;
    if (n == 1) {
        cout << 1 << endl;
    }
    else if (n == 2) {
        cout << 2 << endl;
    } else {
        ll first = max(lcm(n, lcm(n - 1, n - 2)), lcm(n, lcm(n - 1, n - 3)));
        ll second = max(lcm(n - 1, lcm(n - 2, n - 4)), lcm(n - 1, lcm(n - 2, n - 3)));
        cout << max(first, second) << endl;
    }
    end();
    terminate;
}
