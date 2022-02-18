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


int main () {
    IO();
    ull n; cin >> n;
    do {
        map<ull, ull> fact;

        for (ull i = 2; i * i <= n; ++i) {
            while (n % i == 0) {
                fact[i]++;
                n /= i;
            }
        }
        if (n > 1) fact[n] = 1;
        ull cnt = 1;
        ull size = fact.size();
        for (auto item : fact) {
            if (cnt != size)
                cout << item.first << '^' << item.second << space;
            else
                cout << item.first << '^' << item.second << endl;

            cnt++;
        }


        cin >> n;
    } while (n != 0);

    terminate;
}

