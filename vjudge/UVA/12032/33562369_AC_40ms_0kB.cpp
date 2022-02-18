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
int can (vector<ll> &vect, ll target, ll n) {
    if (vect[0] == target) target--;
    for (int i = 0; i < n - 1; ++i) {
        if (vect[i + 1] - vect[i] > target) {
            return false;
        } else if (vect[i + 1] - vect[i] == target) {
            target--;
        }
    }
    return true;
}
ll bs (vector<ll> &vect, ll n) {
    ll l = vect.front(), r = 1e7+1;
    while (l < r) {
        ll mid = l + (r - l) / 2;
        if (can(vect, mid, n)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return r;
}


int main () {
    IO ();
    int t; cin >> t;
    int tt = t;
    while (t--) {
        int n; cin >> n;
        vector<ll> v(n);
        for (auto &item : v) {
            cin >> item;
        }
        cout << "Case " << tt - t << ": " << bs(v, n) << endl;
    }
    terminate;
}
