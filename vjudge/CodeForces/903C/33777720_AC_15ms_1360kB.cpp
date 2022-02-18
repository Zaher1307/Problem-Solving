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

int main () {
    IO();
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> hash;
    int ans = 0;
    for (auto &item : v) {
        cin >> item;
        hash[item]++;
    }
    for (auto item : hash) {
        ans = max(item.second, ans);
    }
//    sort(all(v));
//    v.erase( unique( v.begin(), v.end() ), v.end());
//    for (int i = 0; i < v.size() - 1; ++i) {
//        if (hash[v[i + 1]] >= hash[v[i]]) {
//            ans -= hash[v[i]];
//        } else {
//            ans -= hash[v[i]] - hash[v[i + 1]];
//        }
//    }
    cout << ans << endl;
    end();
    terminate;
}
