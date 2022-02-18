/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define endl "\n"
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

ull number_of_divisors (ull x) {
    if (x == 1) return 1;
    ull cnt = 2;
    for (ull i = 2; i * i <= x; ++i) {
        if (x % i == 0 && i * i != x) {
            cnt += 2;
        } else if (x % i == 0 && i * i == x) {
            cnt++;
        }
    }
    return cnt;
}


int main () {
    IO();
    tc {
        ull l, h; cin >> l >> h;
        pair<ull, ull> mx = {0,0};
        for (ull i = l; i <= h; ++i) {
            ull num = number_of_divisors(i);
            if (num > mx.second) {
                mx.first = i, mx.second = num;
            }
        }
        cout << "Between " << l << " and " << h << ", " << mx.first << " has a maximum of " << mx.second << " divisors." << endl;
    }
    terminate;
}

