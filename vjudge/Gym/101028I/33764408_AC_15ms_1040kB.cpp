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
int k, n;
vector<int> v;

bool can (int l) {
    int st = 0;
    int cnt = 1;
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] - v[st] + 1 > l) {
            cnt++;
            st = i;
        }
    }
    return cnt <= n;
}

int bs () {
    int l = 1, r = 1e9;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (can(mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return r;
}

int main () {
    IO();
    tc {
        cin >> k >> n;
        v.resize(k);
        for (auto &item : v) cin >> item;
        cout << bs() << endl;
        v.clear();
    }
    end();
    terminate;
}
