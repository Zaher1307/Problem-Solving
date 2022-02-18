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

ll fact (ll x) {
    ll res = 1;
    for (int i = 1; i <= x; ++i) {
        res *= i;
    }
    return res;
}

int main () {
    IO();
    tc{
        ll n; cin >> n;
        vector<ll> v(n);
        map<ll, ll> m;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            m[v[i] - i]++;
        }
        ll cnt = 0;
        for (auto item : m) {
            cnt += (item.second * (item.second - 1)) / 2;
        }
        cout << cnt << endl;
    }
    end();
    terminate;
}
