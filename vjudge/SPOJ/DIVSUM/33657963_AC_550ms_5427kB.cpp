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
        vector<ll> divisor;
        if (n > 1) {
            divisor.push_back(1);
        }
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                if (i * i == n) {
                    divisor.push_back(i);
                } else {
                    divisor.push_back(i);
                    divisor.push_back(n / i);
                }
            }
        }
        ll sum = 0;
        for (auto item : divisor) sum += item;
        cout << sum << endl;



    }

    terminate;
}

