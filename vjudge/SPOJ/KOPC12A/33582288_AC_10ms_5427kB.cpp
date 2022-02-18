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
int n;
vector<ll> a, b;

ll cost (ll x) {
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        total += 1ll * abs(a[i] - x) * b[i];
    }
    return total;
}

ll ts () {
    ll l = 0, r = 10001;
    while (l < r) {
        ll mid1 = l + (r - l) / 3, mid2 = r - (r - l) / 3;
        if (cost(mid1) >= cost(mid2)) {
            l = mid1 + 1;
        } else {
            r = mid2 - 1;
        }
    }
    return cost(l);
}

int main () {
    IO ();
    tc {
        cin >> n;
        a.resize(n);
        b.resize(n);
        for (auto &item: a) {
            cin >> item;
        }
        for (auto &item: b) {
            cin >> item;
        }
        cout << ts() << endl;
    }
    terminate;
}
