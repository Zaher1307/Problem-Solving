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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 0) {
            cout << "Y" << space << fixed << setprecision(9) << 0.0 << space << 0.0 << endl;
            continue;
        } else if (n < 4) {
            cout << "N" << endl;
        } else {
            double D = sqrt(n*n - 4 * n);
            double a = (n + D) / 2.0;
            double b = (n - D) / 2.0;
            cout << "Y" << space << fixed << setprecision(9) << a << space << b << endl;
        }
    }
    terminate;
}
