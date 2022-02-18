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
    set<int> s;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            s.insert(i);
            n /= i;
        }
    }
    if (n > 1) s.insert(n);
    return s.size();
}

int main () {
    IO();
    int n; cin >> n;
    int cnt = 0;
    number_of_divisors(9);
    for (int i = 1; i <= n; ++i) {
        if (number_of_divisors(i) == 2) cnt++;
    }
    cout << cnt << endl;
    terminate;
}

