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
vector<bool> prime(1e7+1, true);
vector<int> prevPrime(1e7+5);

void sieve () {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 1e7+1; ++i) {
        if (prime[i]) {
            for (int j = i + i; j <= 1e7+1; j+=i) {
                prime[j] = false;
            }
        }
    }
}

void collect () {
    prevPrime[0] = prevPrime[1] = -1;
    prevPrime[2] = 2;
    int last = 2;
    for (int i = 3; i < 1e7+1; ++i) {
        if (prime[i]) {
            last = i;
            prevPrime[i] = last;
        }
        else {
            prevPrime[i] = last;
        }
    }
}

int main () {
    IO();

    sieve();
    collect();
    int n;
    while (cin >> n) {
        if (n < 8) {
            cout << "Impossible." << endl;
            continue;
        }
        int last;
        for (int i = 3; i > 0; --i) {
            last = prevPrime[n - i * 2];
            cout << last << space;
            n -= last;
        }
        last = prevPrime[n];
        cout << last << endl;
    }

    end();
    terminate;
}
