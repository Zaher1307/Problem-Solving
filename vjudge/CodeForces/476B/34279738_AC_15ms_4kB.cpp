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

string s1, s2;
int unknown = 0;
int real_end_pos = 0;
int hit = 0, miss = 0;

void bk (int index, int end_pos) {
    if (index == unknown) {
        if (end_pos == real_end_pos) {
            hit++;
        } else {
            miss++;
        }
        return;
    }

    bk(index + 1, end_pos + 1);
    bk(index + 1, end_pos - 1);
}

int main () {
    IO();
    cin >> s1 >> s2;
    int end_pos = 0;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] == '+') real_end_pos++;
        else real_end_pos--;
    }
    for (int i = 0; i < s2.size(); ++i) {
        if (s2[i] == '+') end_pos++;
        else if (s2[i] == '-') end_pos--;
        else unknown++;
    }
    bk(0, end_pos);
    cout << fixed << setprecision(12) << (double)hit / (hit + miss) << endl;
    terminate;
}
