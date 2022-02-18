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
vector<bool> primes(1e6+3, true);
vector<int> circular(1e6+3, 0);

void sieve () {
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= 1e6+10; ++i) {
        if (primes[i]) {
            for (int j = i + i; j <= 1e6+10; j += i) {
                primes[j] = false;
            }
        }
    }
}

int pwr(int b, int p) {
    if (!p) return 1;
    int sq = pwr(b, p >> 1);
    sq *= sq;
    if (p&1) sq *= b;
    return sq;
}

bool check (int x) {
    int digits = 1 + (int)floor(log10(x));
    int k = digits;
    while (k--) {
        x = (x / 10) + (x % 10) * pwr(10, digits-1);
        if (!primes[x]) return false;
    }
    return true;
}

void collect () {
    for (int i = 1; i < 1e6+1; ++i) {
        if (primes[i]) {
            if (check(i)) {
                circular[i] = circular[i - 1] + 1;
            } else {
                circular[i] = circular[i - 1];
            }
        } else {
            circular[i] = circular[i - 1];
        }
    }
}

int main () {
    IO();
    sieve();
    collect();
    int l, r; cin >> l >> r;
    while (true) {
        int n = circular[r] - circular[l - 1];
        if (!n) cout << "No Circular Primes." << endl;
        else if (n == 1) cout << "1 Circular Prime." << endl;
        else cout << n << " Circular Primes." << endl;
        cin >> l;
        if (l == -1) break;
        cin >> r;
    }
    end();
    terminate;
}
