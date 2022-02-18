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
ll c, r, q;
vector<ll> divisors (ll n) {
    vector<ll> temp;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i * i == n) {
                if (i > r) {
                    temp.push_back(i);
                }
            }
            else {
                if (i > r) {
                    temp.push_back(i);
                    temp.push_back(n / i);
                } else if (n / i > r) {
                    temp.push_back(n / i);
                }
            }
        }
    }
    sort(all(temp));
    return temp;
}

int main () {
    IO();
    int n; cin >> n;
    for (int t = 1; t <=n; ++t) {
        cout << "Case #" << t << ":";
        cin >> c >> r;
        if (r == c) {
            cout << " 0" << endl;
            continue;
        }
        q = c - r;
        auto ans = divisors(q);
        if (!ans.empty()) {
            cout << space;
            for (int i = 0; i < ans.size() - 1; ++i){
                cout << ans[i] << space;
            }
            cout << ans[ans.size() - 1] << endl;
        } else {
            cout << endl;
        }


    }

//    end();
    terminate;
}
