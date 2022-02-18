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
ull n;
vector<ull> v;


double bs () {

}

int main () {
    IO();
    int cnt = 1;
    tc {
        cin >> n;
        v.resize(n);
        ull mul = 1;
        for (auto &item : v) {
            cin >> item;
            mul *= item;
        }
        ull sum = 0;
        for (auto &item : v) {
            item = mul / item;
            sum += item;
        }
        mul = n * mul;
        ull gcd = __gcd(mul, sum);

        cout << "Case " << cnt << ": " << mul / gcd << '/' << sum / gcd << endl;
        cnt++;
    }
    terminate;
}
