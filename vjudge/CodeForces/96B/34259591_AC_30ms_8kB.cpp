/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t; while (t--)
#define terminate return 0

void IO () {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
#endif
}


int main () {
    IO();
    string s; cin >> s;
    string p;
    for (int i = 0; i < s.size(); ++i) {
        if (i < s.size() / 2) {
            p.push_back('7');
        } else {
            p.push_back('4');
        }
    }
    if (p.size() % 2) p.push_back('7');
    sort(all(p));
    ll mn = LONG_LONG_MAX;
    ll t = stoll(s);
    do {
        ll n = stoll(p);
        if (n >= t) {
            mn = min(n, mn);
        }
    } while (next_permutation(all(p)));
    if (p.size() < 2) {
        cout << 47 << endl;
    } else if (mn != LONG_LONG_MAX) {
        cout << mn << endl;
    } else {
        for (int i = 0; i < s.size() + 2; ++i) {
            if (i < (s.size() + 2) / 2) {
                cout << 4;
            } else {
                cout << 7;
            }
        }
        cout << endl;
    }

    terminate;
}
