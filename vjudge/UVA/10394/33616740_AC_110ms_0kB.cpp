/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t;while (t--)
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}

int const N = 2e7+5;

vector<bool> v (N, true);
vector<pair<int, int>> twin;

void sieve () {
    v[0] = v[1] = false;
    for (int i = 2; i * i <= N ; ++i) {
        if (v[i]) {
            for (int j = 2 * i; j <= N; j += i) {
                v[j] = false;
            }
        }
    }
}

void generate () {
    for (int i = 0; i < N - 2; ++i) {
        if (v[i] && v[i + 2]) {
            twin.emplace_back(i, i + 2);

        }
    }
}



int main () {
    IO();
    sieve();
    generate();
    int n;
    while (cin >> n) {
        cout << "(" << twin[n - 1].first << ", " << twin[n - 1].second << ")" << endl;
    }


    terminate;
}
