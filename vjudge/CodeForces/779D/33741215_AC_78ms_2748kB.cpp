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
string s, p;
vector<int> v;
bool check (int x) {
    string pp = p;
    string ss = s;
    int sz = pp.size();
    for (int i = 0; i < x; ++i) {
        ss[v[i] - 1] = '0';
    }
    int j = 0;
    for (char i : ss) {
        if (i == pp[j]) {
            j++;
        }
        if(j == pp.size()) return true;
    }
    return j == pp.size();
}
ll bs () {
    int l = 0, r = s.size();
    while (l < r) {
        int mid = l + (r - l + 1) / 2;
        if (check(mid)) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int main () {
    IO();
    cin >> s >> p;
    v.resize(s.size());
    for (int i = 0; i < s.size(); ++i) {
        cin >> v[i];
    }
    cout << bs() << endl;
    end();
    terminate;
}
