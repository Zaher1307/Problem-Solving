/*problem link: https://vjudge.net/problem/UVA-524*/

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
int const N = 2e5 + 1;
int a[N], b[N];
int n, m;

int main () {
    IO ();
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(a, a+n);
    for (int i = 0; i < m; ++i) {
        cout << upper_bound(a, a + n, b[i]) - a << space;
    }

    terminate;
}