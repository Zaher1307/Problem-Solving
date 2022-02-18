/*problem link: https://vjudge.net/problem/UVA-524*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define ull unsigned long long

using namespace std;

void IO(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}
vector<int> sol = {1};
int n;

bool isPrime (int x) {
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x < 2) return false;
    for (int i = 3; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

bool notExist (int x) {
    for (int i = 0; i < sol.size(); ++i) {
        if (sol[i] == x) return false;
    }
    return true;
}

void solve (int indx) {
    //base case
    if (indx == n) {
        if (isPrime(sol.back() + 1)) {
            for (int i = 0; i < n - 1; ++i) {
                cout << sol[i] << space;
            }
            cout << sol[n - 1] << endl;
        }
        return;
    }

    for (int i = 2; i <= n; ++i) {
        int sum = sol[indx - 1] + i;
        if (isPrime(sum) && notExist(i)){
            sol.push_back(i);
            solve (indx + 1);
            sol.pop_back();
        }
    }



}

int main () {
    IO();
    int cnt = 1;
    while (cin >> n) {
        if (cnt != 1) cout << endl;
        cout << "Case " << cnt << ":" << endl;
        solve(1);
        cnt++;
    }

    terminate;
}
