/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t;while (t--)
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}
ll n, a, r, m;
vector<ll> v;

ll cost (ll x) {
    ll hi = 0, low = 0;
    ll total;
    for (auto item : v) {
        if (x > item) {
            low += abs(x - item);
        } else if (x < item) {
            hi += abs(x - item);
        }
    }
    if (a + r < m) {
        total = a * low + r * hi;
    } else {
        ll req = min(low, hi);
        total = req * m;
        low -= req, hi -= req;
        total += low * a + hi * r;
    }
    return total;
}

ll ts () {
    ll lo = 0, hi = 1e9+1;
    while (lo < hi) {
        ll mid1 = lo + (hi - lo) / 3, mid2 = hi - (hi - lo) / 3;
        if (cost(mid1) > cost(mid2)) {
            lo = mid1 + 1;
        } else {
            hi = mid2 - 1;
        }
    }
    return cost(lo);
}


int main () {
    IO();
    cin >> n >> a >> r >> m;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << ts() << endl;
    terminate;
}
//