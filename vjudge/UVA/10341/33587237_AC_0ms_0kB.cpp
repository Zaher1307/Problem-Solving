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

int p, q, r, s, t, u;

double f(double x) {
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double bs () {
    double l = 0, hi = 1;
    while (l + 1e-7 < hi) {
        double mid = l + (hi - l) / 2;
        if (f(mid) < 0) {
            hi = mid;
        } else {
            l = mid;
        }
    }
    return l;
}

int main () {
    IO();
    int n;
    while (cin >> p >> q >> r >> s >> t >> u) {
        double sol = bs();
        if (abs(f(sol)) <= 1e-5) {
            cout << fixed << setprecision(4) << sol << endl;
        }else{
            cout << "No solution" << endl;
        }
    }
    terminate;
}
