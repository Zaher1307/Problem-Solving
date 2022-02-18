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
#define tc int t; cin >> t; while (t--)
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
vector<ll> smallestprimefactor (1e7+5, 0);
vector<ll> com(1e7+5, 0);
vector<ll> factors (1e7+5);

vector<bool> prime(1e7 + 5, true);
vector<ll> primes;

void sieve () {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 1e7; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= 1e7; j+=i) {
                prime[j] = false;
            }
        }
    }
}

void generate () {
    sieve();
    for (int i = 0; i <= 1e7; ++i) {
        if(prime[i]) primes.push_back(i);
    }
    for (int i = 2; i <= 1e7; ++i) {
        if (i % 2 == 0) factors[i] = 2;
        else {
            for (int j = 1; j * j <= i; j += 2) {
                if (i % j == 0) {
                    if (prime[j]) {
                        factors[i] = j;
                        break;
                    } else if (prime[i / j]) {
                        factors[i] = i / j;
                        break;
                    }
                }
            }
        }
    }


    for (int i = 2; i <= 1e7+1; ++i) {
        com[i] = com[i - 1] + factors[i];
    }
}

int main () {
    IO();
    sieve();
    generate();
    tc {
        int n; cin >> n;
        cout << com[n] << endl;
    }
    end();
    terminate;
}
