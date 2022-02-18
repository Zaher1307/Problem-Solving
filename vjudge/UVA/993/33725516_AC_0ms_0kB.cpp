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
            for (ll j = i * i; j <= N; j+=i) {
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

vector<ll> factors (ll n) {
    vector<ll> v;
    if (n % 10 == n) {
        v.push_back(n);
        return v;
    }
    for (ll j = 9; j > 1; --j) {
        while (n % j == 0) {
            n /= j;
            v.push_back(j);
        }
    }
    if(n > 9) {
        v.clear();
        v.push_back(-1);
    } else {
        if (n > 1) {
            v.push_back(n);
        }
    }
    sort(all(v));
    return v;
}

int main () {
    IO();

    tc {
        ll n; cin >> n;
        vector<ll> v = factors(n);
        for(auto item : v) {
            cout << item;
        }
        cout << endl;
    }

    end();
    terminate;
}
