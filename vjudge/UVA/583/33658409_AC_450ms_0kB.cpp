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
    ll n; cin >> n;
    do {
        ll nn = n;
        vector<ll> fact;
        int flag = 1;
        if (n < 0) {
            flag = -1;
        }
        n *= flag;
        for (ll i = 2; i * i <= n; ++i) {
            while (n % i == 0) {
                fact.push_back(i);
                n /= i;
            }
        }
        if (n > 1) fact.push_back(n);
        cout << nn << " = ";
        if (flag == -1) cout << flag << space << "x" << space;
        for (ll i = 0; i < fact.size() - 1; ++i) {
            cout << fact[i] << space << 'x' << space;
        }
        cout << fact[fact.size()-1] << endl;

        cin >> n;
    } while (n != 0);

    terminate;
}

