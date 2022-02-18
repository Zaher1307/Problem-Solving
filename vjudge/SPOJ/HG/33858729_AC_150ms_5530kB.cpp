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
ll const MOD = 1e9;


void fact(ll n, map<ll, ll> &mp) {
    while (n % 2 == 0) {
        mp[2]++;
        n /= 2;
    }
    for (ll i = 3; i*i <= n; i+=2) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        mp[n]++;
    }
}

int main () {
    IO();
    ll n; cin >> n;
    map<ll, ll> a, b;
    for (ll i = 0; i < n; ++i) {
        ll temp; cin >> temp;
        fact(temp, a);
    }
    ll m; cin >> m;
    for (ll i = 0; i < m; ++i) {
        ll temp; cin >> temp;
        fact(temp, b);
    }
    vector<ll> ans;
    for (auto item : a) {
        auto it = b.find(item.first);
        if (it != b.end()) {
            ll mn = min(it->second, item.second);
            for (int i = 0; i < mn; ++i) {
                ans.push_back(item.first);
            }
        }
    }

    ll mul = 1;
    bool flag = false;
    for (auto item : ans) {
        mul *= item;
        if (mul >= MOD) {
            flag = true;
            mul %= MOD;
        }
    }
    if (flag) {
        string s = to_string(mul);
        if (s.size() <= 9) {
            for (int i = 0; i < 9-s.size(); ++i) {
                cout << 0;
            }
            cout << s << endl;
        }
    } else {
        cout << mul << endl;
    }


    end();
    terminate;
}
// 10000000001010502
