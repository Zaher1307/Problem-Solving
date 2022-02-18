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

/**************************************************************************************************/
/**/std::chrono::system_clock::time_point start;                                                /**/
/**/void end () {                                                                               /**/
#ifdef ZAHER                                                                                    /**/
/**/    auto stop = high_resolution_clock::now();                                               /**/
/**/    auto duration = duration_cast<microseconds>(stop - start);                              /**/
/**/    cout << duration.count() * 1e-6 << " second" << endl;                                   /**/
#endif
/**/}                                                                                           /**/
/**/void IO () {                                                                                /**/
/**/    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);        /**/
#ifdef ZAHER                                                                                    /**/
/**/    freopen ("../in.txt", "r", stdin);                                        /**/
/**/    freopen ("../out.txt", "w", stdout);                                      /**/
/**/    start = high_resolution_clock::now();                                                   /**/
#endif
/**/}                                                                                           /**/
/************************************************************************************************/
vector<bool> prime(1005, true);
vector<int> primes;

void sieve () {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 1004; ++i) {
        if (prime[i]) {
            for (int j = i + i; j <= 1004; j += i) {
                prime[j] = false;
            }
        }
    }
}
void collect () {
    for (int i = 0; i < prime.size(); ++i) {
        if (prime[i]) primes.push_back(i);
    }
}

bool can(int x) {
    for (int i = 0; i < primes.size() - 1; ++i) {
        if (primes[i + 1] + primes[i] + 1 == x) return true;
    }
    return false;
}


int main () {
    IO();
    sieve();
    collect();
    int cnt = 0;
    int n, k; cin >> n >> k;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            if (can(i)) {
                cnt++;
            }
        }
    }
    if (cnt < k) cout << "NO" << endl;
    else cout << "YES" << endl;
    end();
    terminate;
}

