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
int k;
vector<int> prime(100001, 0);

int prime_factors (int n) {
    set<int> m;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            m.insert(i);
            n /= i;
        }
    }
    if (n > 1) m.insert(n);
    return m.size();
}

void generate () {
    for (int i = 2; i <= 100000; ++i) {
        prime[i] = prime_factors(i);
    }
}

int main () {
    IO();
    generate();
    tc {
        int a, b; cin >> a >> b >> k;
        int cnt = 0;
        for (int i = a; i <= b; ++i) {
            if (prime[i] == k) cnt++;
        }
        cout << cnt << endl;
    }
    end();
    terminate;
}
