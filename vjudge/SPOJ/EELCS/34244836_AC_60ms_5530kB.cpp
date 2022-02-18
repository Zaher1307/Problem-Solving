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
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}
string temp;

void bk (const string& s, vector<string>& vect, int index) {
    bool flag = false;
    if (index == s.size()) {
        if (!temp.empty()) {
            vect.emplace_back(temp);
        }
        return;
    }
    temp += s[index];
    bk(s, vect, index+1);
    temp.pop_back();
    bk(s, vect, index+1);
}

int main () {
    IO();
    string s1, s2; cin >> s1 >> s2;
    vector<string> v1;
    vector<string> v2;
    bk(s1, v1, 0);
    bk(s2, v2, 0);
    
    int mx = 0;
    for (int i = 0; i < v1.size(); ++i) {
        for (int j = 0; j < v2.size(); ++j) {
            if (v1[i] == v2[j]) {
                mx = max(mx, sz(v1[i]));
            }
        }
    }
    cout << mx << endl;
    terminate;
}
