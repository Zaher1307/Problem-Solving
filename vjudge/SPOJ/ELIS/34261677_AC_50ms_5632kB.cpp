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
int n; 
vector<int> v;

int bk (int idx, int last) {
    if (idx == n) {
        return 0;
    }
    if (v[idx] > last) {
        return max(bk(idx + 1, v[idx]) + 1, bk(idx + 1, last));    
    } else {
        return bk(idx + 1, last);
    }
    
}

int main () {
    IO();
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    bk(0, -1);
    cout << bk(0, -1) << endl;
    terminate;
}
