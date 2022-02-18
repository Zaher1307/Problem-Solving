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

int number_of_divisors(int n) {
    if (n == 1) return 1;
    int cnt = 2;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i * i == n) cnt ++;
            else cnt += 2;
        }
    }
    return cnt;
}

int main () {
    IO();
    tc {
        int a, b; cin >> a >> b;
        int n = __gcd(a, b);
        cout << number_of_divisors(n) << endl;
    }
    terminate;
}

