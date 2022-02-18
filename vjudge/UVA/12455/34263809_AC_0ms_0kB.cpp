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

int n, p; 
vector<int> v;

bool bk (int index, int rem) {
    bool ret = false;
    if (index == p) {
        if (!rem) {
            ret = true;
        }
        return ret;
    }
    if (v[index] <= rem) {
        ret |= bk(index + 1, rem - v[index]);
        ret |= bk(index + 1, rem);
    } else {
        ret |= bk(index + 1, rem);
    }
    return ret;
}

int main () {
    IO();
    tc {
        cin >> n >> p;
        v.resize(p);
        for (int i = 0; i < p; ++i) {
            cin >> v[i];
        }
        if (bk(0, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        v.resize(0);
    }
    terminate;
}
