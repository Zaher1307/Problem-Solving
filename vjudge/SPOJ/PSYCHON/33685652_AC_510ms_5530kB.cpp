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
map<ll, ll> m;

void factors (ll n) {
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0){
            n /= i;
            m[i]++;
        }
    }
    if (n > 1) m[n]++;
}

int main () {
    IO();
    tc {
        int n; cin >> n;
        if (n == 1) {
            cout << "Ordinary Number" << endl;
            continue;
        }
        factors(n);
        ll odd = 0, even = 0;
        for (auto item : m) {
            if (item.second % 2) odd++;
            else even++;
        }
        if (even > odd) cout << "Psycho Number" << endl;
        else cout << "Ordinary Number" << endl;
        m.clear();
    }

    end();
    terminate;
}
