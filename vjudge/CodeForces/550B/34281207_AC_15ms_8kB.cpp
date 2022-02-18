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

int n, l, r, x;
vector<int> v;
vector<int> ans;
int cnt = 0;

bool valid () {
    if (ans.size() < 2) return false;
    int mn = INT_MAX;
    int mx = 0;
    int com = 0;
    for (int i = 0; i < ans.size(); ++i) {
        com += ans[i];
        mn = min(mn, ans[i]);
        mx = max(mx, ans[i]);
    }
    return ((mx - mn) >= x) && (com <= r && com >= l);
}

void bk (int index) {
    if (index == n) {
        if (valid()) {
            cnt++;
        }
        return;
    }
    ans.push_back(v[index]);
    bk(index + 1);
    ans.pop_back();
    bk(index + 1);
}

int main () {
    IO();
    cin >> n >> l >> r >> x;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    bk(0);
    cout << cnt << endl;
    terminate;
}
