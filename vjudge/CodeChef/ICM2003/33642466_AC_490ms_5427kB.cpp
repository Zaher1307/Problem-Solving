/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define PI 3.14159265359
#define tc int t; cin >> t;while (t--)
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}
double b, c;

double f (double x) {
    return (x * x + b * x + c) / sin(x);
}

double bs () {
    double l = 0, r = PI / 2;
    while (r - l > 1e-8) {
        double mid1 = l + (r - l) / 3;
        double mid2 = r - (r - l) / 3;
        if (f(mid1) < f(mid2)) {
            r = mid2;
        } else {
            l = mid1;
        }
    }
    return l;
}

int main () {
    IO();
    tc {
        cin >> b >> c;
        cout << fixed << setprecision(9) << f(bs()) << endl;
    }
    terminate;
}






//vector<bool> primes(1e6, true);

//void sieve () {
//    primes[0] = primes[1] = false;
//    for (int i = 2; i * i < 1e6; ++i) {
//        if (primes[i]) {
//            for (int j = 2 * i; j < 1e6; j += i) {
//                primes[j] = false;
//            }
//        }
//    }
//}


//int main () {
//    int n; cin >> n;
//    sieve();
//    cout << 2 << endl;
//    for (int i = 2; i <= n; ++i) {
//        if (primes[i]) {
//            cout << 1 << space;
//        } else {
//            cout << 2 << space;
//        }
//    }
//    terminate;
//}
