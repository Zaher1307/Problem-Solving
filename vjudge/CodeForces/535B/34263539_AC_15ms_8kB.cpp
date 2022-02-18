/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t; while (t--)
#define terminate return 0

void IO () {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
#endif
}



int main () {
    IO();
    string s; cin >> s;
    string b; 
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '4') b.push_back('0');
        else b.push_back('1');
    }
    ull base = pow(2, sz(s)) - 1;
    ull offset = stoi(b, 0, 2);
    cout << base + offset << endl;

    terminate;
}
