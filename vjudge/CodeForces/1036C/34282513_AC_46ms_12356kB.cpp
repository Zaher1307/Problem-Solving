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

vector<ll> v;

void bk (int index, int cnt, ll n) {
    if (index == 18) {
        v.push_back(n);
        return;
    }

    bk(index + 1, cnt, n * 10);
    
    if (cnt < 3) {
        for (int i = 1; i <= 9; ++i) {
            bk(index + 1, cnt + 1, n * 10 + i);
        }
    }
}

int main () {
    IO();
    bk(0, 0, 0);
    v.push_back(1000000000000000000);
    tc {
        ll l, r; cin >> l >> r;
        cout << upper_bound(all(v), r) - lower_bound(all(v), l) << endl;
    }
    terminate;
}
