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
#define tc int t; cin >> t;while (t--)
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

ll divisor (ll n) {
    set<ll> s;
    ll mx = 0;
    if (n < 0) n *= -1;
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            s.insert(i);
            mx = max(mx, i);
            n /= i;
        }
    }
    if (n > 1) {
        mx = n;
        s.insert(n);
    }
    if (s.size() > 1) {
        return mx;
    } else {
        return -1;
    }
}

int main () {
    IO();
    ll n; cin >> n;
    while (n) {
        cout << divisor(n) << endl;
        cin >> n;
    }

    terminate;
}
