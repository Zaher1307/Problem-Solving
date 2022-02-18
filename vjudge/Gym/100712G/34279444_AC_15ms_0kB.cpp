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

int n, s; 
vector<int> v;
int mn = 0;
vector<int> ans;

bool valid () {
    int com = accumulate(all(ans), 0);
    if (com < s) return false;
    for (int i = 0; i < ans.size(); ++i) {
        if (com - ans[i] >= s) {
            return false;
        }
    }
    return true;
}

void bk (int index, int rem) {
    if (index == n) {
        if (valid()) {
            mn = max(mn, sz(ans));
        }
        return;
    }
    ans.push_back(v[index]);
    bk(index + 1, rem - v[index]);
    ans.pop_back();
    bk(index + 1, rem);
}

int main () {
    IO();
    tc {
        cin >> n >> s;
        v.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        bk(0, s);
        cout << mn << endl;
        v.clear();
        mn = 0;
    }    
    terminate;
}
