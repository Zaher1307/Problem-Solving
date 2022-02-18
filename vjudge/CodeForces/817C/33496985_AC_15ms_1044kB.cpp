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
ll n, d;

ll sum_digit(string s) {
    ll sum = 0;
    for (char i : s) {
        sum += i - '0';
    }
    return sum;
}

ll bs () {
    ll l = 0, r = n;
    ll ans = 0;
    while (l < r) {
        ll mid = l + (r - l + 1) / 2;
        if (mid - sum_digit(to_string(mid)) < d) {
            l = mid;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main () {
    IO ();
    cin >> n >> d;
    cout << n - bs() << endl;
    terminate;
}