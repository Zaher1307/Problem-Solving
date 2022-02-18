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
bool prime (int x) {
    set<int> s;
    int cnt = 0;
    for (int i = 2; i * i <= x; ++i) {
        while (x % i == 0) {
            s.insert(i);
            cnt++;
            x /= i;
        }
    }
    if (x > 1) {
        cnt++;
        s.insert(x);
    }
    return s.size() == cnt && cnt == 2;
}

bool can (int a, int b) {
    return prime(a) && prime(b);
}

int main () {
    IO();
    tc {
        prime(15);
        int n; cin >> n;
        int l = 1, r = n - 1;
        while (l <= r) {
            if (can(l, r)) {
                cout << "YES" << endl;
                goto o;
            }
            l++, r--;
        }
        cout << "NO" << endl;
        o:
        continue;
    }
    end();
    terminate;
}
