/*problem link: https://vjudge.net/problem/UVA-167*/

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

int board[9][9] = {0};
int check[9][9] = {0};
vector<pair<int, int>> ans;

bool valid (int x, int y) {
    return x > 0 && y > 0 && x < 9 && y < 9;
}

void choose (int row , int col, int c) {
    check[row][col] += c;
    for (int i = 1; i < 9; ++i) {
        if (i != row) {
            check[i][col] += c;
        }
    }
    for (int i = 1; i < 9; ++i) {
        if (i != col) {
            check[row][i] += c;
        }
    }
    for (int i = 1; i < 9; ++i) {
        if (valid(row + i, col + i)) {
            check[row + i][col + i] += c;
        }
        if (valid(row + i, col - i)) {
            check[row + i][col - i] += c;
        }
        if (valid(row - i, col + i)) {
            check[row - i][col + i] += c;
        }
        if (valid(row - i, col - i)) {
            check[row - i][col - i] += c;
        }
    }


}


int solve (int col){
    int mx = 0;

    //base case
    if (col == 9) {
        int res = 0;
        for (auto item : ans){
            res += board[item.first][item.second];
        }
        return res;
    }

    for (int i = 1; i < 9; ++i) {
        if(check[i][col] == 0) {
            choose(i, col, 1);
            ans.push_back({i, col});
            mx = max(mx, solve(col + 1));
            ans.pop_back();
            choose(i, col, -1);
        }
    }

    return mx;
}

int main () {
    IO();
    int t; cin >> t;


    while (t--) {
        int res = 0;
        for (int i = 1; i < 9; ++i) {
            for (int j = 1; j < 9; ++j) {
                cin >> board[i][j];
            }
        }

        res = solve(1);

        cout << right << setw(5) << res << endl;
    }


    terminate;
}
