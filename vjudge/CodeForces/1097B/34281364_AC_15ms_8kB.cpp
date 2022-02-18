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

bool bk (int index, int total) {
    if(index == n) {
        if (total % 360 == 0) {
            return true;
        }
        return false;
    }
    return bk(index + 1, total + v[index]) || bk(index + 1, total - v[index]);
}

int main () {
    IO();
    cin >> n;
    v.resize(n);
    for (auto &item : v) {
        cin >> item;
    }
    if (bk(0, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    terminate;
}
