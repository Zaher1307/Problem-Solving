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
int n;
vector<pair<int, int>> dom;
vector<int> visited(15, 0);
int back_track(int left, pair<int, int> right, int index) {
    int ans = 0;
    //base case
    if(index == n) {
        return left == right.first;
    }
    //else
    for(int i = 0; i < dom.size() && !ans; ++i) {
        if(visited[i]) continue;
        else {
            if(left == dom[i].first) {
                visited[i] = 1;
                ans = back_track(dom[i].second, right, index + 1);
                visited[i] = 0;
            }
            else if(left == dom[i].second) {
                    visited[i] = 1;
                    ans = back_track(dom[i].first, right, index + 1);
                    visited[i] = 0;
            }
        }
    }

    return ans;
}

int main () {
    IO ();
    cin >> n;
    while (n != 0){
        int m; cin >> m;
        int first, second;
        pair<int, int> left;
        pair<int, int> right;
        cin >> first >> second;
        left.first = first;
        left.second = second;
        cin >> first >> second;
        right.first = first;
        right.second = second;

        for(int i = 0; i < m; ++i) {
            int f, s; cin >> f >> s;
            dom.emplace_back(f, s);
        }

        if(back_track(left.second, right, 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        dom.erase(dom.begin(), dom.end());
        cin >> n;
    }

    terminate;
}