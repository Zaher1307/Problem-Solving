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

int can (vector<ll> &v, ll n, ll &s, ll dummy) {
    vector<ll> cost(v.size());
    for (int i = 0; i < v.size(); ++i) {
        cost[i] = v[i] + (i + 1) * n * 1ll;
    }
    sort(all(cost));
    ll var = accumulate(cost.begin(), cost.begin() + n, 0ll);
    if (dummy && var <= s) {
        s = var;
    }
    if(var <= s) {
        return 1;
    } else {
        return 0;
    }

}

void bs (vector<ll>& v,ll n, ll s) {
    ll l = 0, r = n;
    ll ss = s;
    while (l < r) {
        int mid = l + (r - l + 1) / 2;
        if (can(v, mid, ss, 0)) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    can(v, l, ss, 1);
    cout << l << space << ss << endl;

}


int main () {
    IO ();
    ll n, s; cin >> n >> s;
    vector<ll> v(n);
    for (auto &item : v) {
        cin >> item;
    }
    bs(v, n, s);
    terminate;
}

/*
tc {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (auto &item : a) {
        cin >> item;
    }
    for (auto &item : b) {
        cin >> item;
    }
    cout << ts(a, b) << endl;
}
 */