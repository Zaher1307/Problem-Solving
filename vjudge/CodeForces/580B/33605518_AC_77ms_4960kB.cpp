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

int n, d, sum;
vector<pair<ll, ll>> v;
vector<ll> com;

int main () {
    IO();
    cin >> n >> d;
    v.resize(n);
    com.resize(n+1);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        com [i+1] = com[i] + v[i].second;
    }
    vector<ll> m;
    for (auto item : v) {
        m.push_back(item.first);
    }
    ll mx = 0;
    for (int i = 0; i < n; ++i) {
        auto it = lower_bound(all(m), m[i] + d);
        if (it == m.end()) {
            mx = max(mx, com[n] - com[i]);
        } else {
            int index = it - m.begin();
            mx = max(mx, com[index] - com[i]);
        }
    }

    cout << mx << endl;
    terminate;
}
