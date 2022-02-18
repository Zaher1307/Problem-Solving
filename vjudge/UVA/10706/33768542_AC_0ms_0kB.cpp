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
/**/    cout << endl << duration.count() * 1e-6 << " second" << endl;                                   /**/
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
/**********************************************solution********************************************/
vector<ll> sizes (1e5, 0);
vector<ll> com (1e5+1, 0);
map<ll, ll> m;

int num_of_digits (ll n) {
    int cnt = 0;
    while (n) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main () {
    IO();
    for (ll i = 1; i < 1e5; ++i) {
        sizes[i] = sizes[i - 1] + num_of_digits(i);
        com[i] = com[i-1] + sizes[i];
    }

    tc {
        ll n; cin >> n;
        auto it = lower_bound(all(com), n) - 1;
        n -= *it;
        int index = it - com.begin() + 1;
        string s;
        for (int i = 1; i <= index; ++i) {
            s += to_string(i);
        }
        cout << s[n - 1] << endl;
    }
    end();
    terminate;
}
/*
 * 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5 1 2 3 4 5 6
 */