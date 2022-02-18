/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}


int main () {
    IO ();
    int n; cin >> n;
    vector<ll> hero(n);
    ll mx = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> hero[i];
        sum += hero[i];
        mx = max(mx, hero[i]);
    }
    sort(all(hero));
    int m; cin >> m;
    ll x, y;
    for (int i = 0; i < m; ++i) {
        ll coins = 0;
        cin >> x >> y;
        auto it = lower_bound(all(hero), x);
        if (it == hero.end()) {
            it--;
            coins = x - *it + max(y - (sum - *it), 0ll);
        } else {
            coins = max((x - *it), 0ll) + max(y - (sum - *it), 0ll);
            if (it != hero.begin()) {
                it--;
                coins = min(coins, max((x - *it), 0ll) + max(y - (sum - *it), 0ll));
            }
        }
        cout << coins << endl;
    }

    terminate;
}
