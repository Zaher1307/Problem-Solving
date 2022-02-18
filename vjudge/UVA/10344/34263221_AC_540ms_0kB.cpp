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

vector<int> v(5);
vector<char> opr = {'+', '-', '*'};
vector<char> ans;

bool bk (int index) {
    bool res = false;
    int result;
    if (index == 4) {
        result = v[0];
        for (int i = 0; i < 4; ++i) {
            switch (ans[i]) {
                case '+':
                    result += v[i+1]; 
                    break;
                    
                case '-':
                    result -= v[i+1];
                    break;

                case '*':
                    result *= v[i+1];
                    break;

                default:
                    break;
            }
        }
        if (result == 23) res = true;
        return res;
    }

    for (int i = 0; i < 3; ++i) {
        ans.push_back(opr[i]);
        res |= bk(index + 1);
        ans.pop_back();
    }

    return res;
}

int main () {
    IO();
    while (cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4]) {
        if (!(v[0] && v[1] && v[2] && v[3] && v[4])) break;
        sort(all(v));
        bool res = false;
        do {
            res |= bk(0);
            if (res) break;
        } while (next_permutation(all(v)));
        if (res) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    terminate;
}




























