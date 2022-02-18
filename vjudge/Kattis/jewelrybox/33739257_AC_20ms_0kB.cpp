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
double x, y;

double calc_vol(double h) {
    return (x - 2*h) * (y - 2*h) * h;
}

double ts () {
    double l = 0, r = min(x, y) / 2;
    while (r - l >= 1e-8) {
        double mid1 = l + (r - l) / 3;
        double mid2 = r - (r - l) / 3;
        if (calc_vol(mid1) > calc_vol(mid2)) {
            r = mid2;
        } else {
            l = mid1;
        }
    }
    return l;
}

int main () {
    IO();

    tc {
        cin >> x >> y;
        cout << fixed << setprecision(11) << calc_vol(ts()) << endl;
    }

    end();
    terminate;
}
//