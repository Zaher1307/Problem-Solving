/*problem link: https://vjudge.net/problem/UVA-524*/

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//#ifdef ZAHER
//    freopen ("../in.txt", "r", stdin);
//    freopen ("../out.txt", "w", stdout);
//#endif
}


int main () {
    IO ();
    int n; cin >> n;
    int l = 1, r = n;
    while (l < r) {
        int mid = l + (r - l + 1) / 2;
        cout << mid << endl;
        fflush(stdout);
        string s; cin >> s;
        if (s == ">=") {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << "!" << space << l << endl;
    fflush(stdout);
    terminate;
}
