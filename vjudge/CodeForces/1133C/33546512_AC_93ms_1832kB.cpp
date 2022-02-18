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
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}

int const N = 2e5 + 1;
int n;
int arr[N];

int can (int x) {
    for (int i = 0; i < n - x + 1; ++i) {
        if (arr[i] + 5 >= arr[i + x - 1]) {
            return true;
        }
    }
    return false;
}

int bs () {
    int l = 1, r = n, mid;
    int ans = 1;
    while (l < r) {
        mid = l + (r - l + 1) / 2;
        if (can(mid)) {
            l = mid;
            ans = max(mid, ans);
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int main () {
    IO ();
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << bs() << endl;

    terminate;
}
