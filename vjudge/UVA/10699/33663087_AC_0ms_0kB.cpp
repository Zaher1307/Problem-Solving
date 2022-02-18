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
vector<bool> primes(1000009, true);

void sieve () {
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= 1000009; ++i) {
        if (primes[i]) {
            for (int j = i + i; j < 2010; j += i) {
                primes[j] = false;
            }
        }
    }
}

int cnt (int x) {
    set<int> s;
    int ans;
    for (int i = 2; i * i < x; ++i) {
        while (x % i == 0) {
            s.insert(i);
            x /= i;
        }
    }
    if (x > 1) ans = 1;
    else ans = 0;
    return s.size() + ans;
}


int main () {
    IO();
    int n; cin >> n;
    while (n) {
        int num = cnt(n);
        cout << n << " : " << num << endl;

        cin >> n;
    }
    terminate;
}

