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
/**/    cout << endl << duration.count() * 1e-6 << " second" << endl;                                   /**/
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
/**********************************************solution********************************************/
vector<bool> prime(1e7+5, true);
vector<ll> primes;
vector<ll> com(1e6 + 5);
int const N = 1e6+1;

void sieve () {
    prime[0] = prime[1] = false;
    for (ll i = 2; i * i <= N; ++i) {
        if (prime[i]) {
            for (ll j = i + i; j <= N; j+=i) {
                prime[j] = false;
            }
        }
    }
}

void collect () {
    for (ll i = 3; i < N; ++i) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
}

void factors () {
    for (ll i = 2; i < N; ++i) {
        ll cnt = 0;
        ll n = i;
        for (ll j = 2; j * j <= n; ++j) {
            while (n % j == 0) {
                cnt++;
                n /= j;
            }
        }
        if (n > 1) cnt++;
        com[i] = com[i-1] + cnt;
    }
}

int main () {
    IO();
    sieve();
    collect();
    factors();
    ll n;
    while (cin >> n) {
        cout << com[n] << endl;
    }
    end();
    terminate;
}
