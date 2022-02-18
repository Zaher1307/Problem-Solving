///*problem link: https://vjudge.net/problem/UVA-524*/
//
//#include <bits/stdc++.h>
//using namespace std;
//
//#define space ' '
//#define ll long long
//#define ull unsigned long long
//#define sz(a) ((int)(a).size())
//#define all(a) (a).begin(), (a).end()
//#define terminate return 0
//
//void IO(){
//    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//#ifdef ZAHER
//    freopen ("../in.txt", "r", stdin);
//    freopen ("../out.txt", "w", stdout);
//#endif
//}
//
//int const N = 2e5 + 1;
//int n;
//int arr[N];
//
//int can (int x) {
//    int flag = true;
//    if (x == 1 && arr[1] - arr[0] > 5) return false;
//    for (int i = 0; i < x - 1; ++i) {
//        if (arr[i + 1] - arr[i] > 5) {
//            flag = false ;
//            break;
//        }
//    }
//    return flag;
//}
//
//int bs () {
//    int l = 0, r = n - 1, mid;
//    int ans = 1;
//    while (l < r) {
//        mid = l + (r - l + 1) / 2;
//        if (can(mid)) {
//            l = mid;
//            ans = max(mid + 1, ans);
//        } else {
//            r = mid - 1;
//        }
//    }
//    return ans;
//}
//
//int main () {
//    IO ();
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    sort(arr, arr + n);
//    cout << bs() << endl;
//
//    terminate;
//}





/*problem link: https://vjudge.net/problem/UVA-524*/

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)a.size())
#define all(a) a.begin(), a.end()
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}
const ll N = 1e5 + 1;
ll a[N], b[N];
ll n, k;

int can (ll mx) {
    ll kk = k;
    for (int i = 0; i < n; ++i) {
        if (a[i] * mx < b[i]) {
            continue;
        } else {
            if (kk >= a[i] * mx - b[i]) {
                kk -= a[i] * mx - b[i];
                continue;
            } else {
                return 0;
            }
        }
    }
    return 1;
}

ll bs () {
    ll l = 0, r = 2e9+5;
    ll ans;
    while (l < r) {
        ll mid = l + (r - l + 1) / 2;
        if (can(mid)) {
            l = mid;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main () {
    IO ();
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    ll mx = bs();
    cout << mx << endl;

    terminate;
}