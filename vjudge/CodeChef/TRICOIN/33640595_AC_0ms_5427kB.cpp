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

int main () {
    IO();
    tc {
        ll n; cin >> n;
        cout << (ll)(-1 + sqrt(1 + 8 * n) ) / 2 << endl;
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
