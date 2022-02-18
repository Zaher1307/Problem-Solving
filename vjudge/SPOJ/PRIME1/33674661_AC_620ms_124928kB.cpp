/*problem link: */

#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

#define space ' '
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t;while (t--)
#define terminate return 0
std::chrono::system_clock::time_point start;

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
    start = high_resolution_clock::now();
#endif
}
vector<bool> prime(1e9+10, true);

void sieve () {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 1e9+5; i++) {
        if (prime[i]) {
            for (int j = i + i; j <= 1e9+5; j += i) {
                prime[j] = false;
            }
        }
    }
}
bool is_prime (int x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}


int main () {
    IO();
    tc {
        int l, r; cin >> l >> r;
        for (int i = l; i <= r; ++i) {
            if (is_prime(i)) cout << i << endl;
        }
        cout << endl;
    }
#ifdef ZAHER
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() * 1e-6 << " second" << endl;
#endif
    terminate;
}

