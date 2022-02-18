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
int n, m, d;
vector<int> v;


int main () {
    IO();
    cin >> n >> m >> d;
    set<int> s;
    v.resize(n);
    map<int, int> ans;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        s.insert(v[i]);
    }

    int cnt = 1;
    while (!s.empty()) {
        auto it = s.begin();
        while (it != s.end()) {
            ans[*it] = cnt;
            auto next = s.upper_bound(*it + d);
            s.erase(it);
            it = next;
        }
        cnt++;
    }
    cout << cnt - 1 << endl;
    for (auto item : v) cout << ans[item] << space;
    cout << endl;

    end();
    terminate;
}
