/*https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1301*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define ull unsigned long long

using namespace std; 

void IO(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifdef zaher
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}
bool valid(int x,int y){
    return x >= 0 && y >= 0 && x < 1025 && y < 1025;
}

int main(){
    IO();
    int t; cin >> t;
    while(t--){
        int d, n; cin >> d >> n;
        int grid[1025][1025]{0};
        while(n--){
            int x, y, r; cin >> x >> y >> r;
            for(int i = -d; i <= d; ++i){
                for(int j = -d; j <= d; ++j){
                    int newX = x + i, newY = y + j;
                    if(valid(newX, newY)){
                        grid[newX][newY] += r;
                    }
                }
            }
        }
        int mx = 0, x, y;
        for(int i = 0; i < 1025; ++i){
            for(int j = 0; j < 1025; ++j){
                if(grid[i][j] > mx){
                    mx = grid[i][j];
                    x = i; y = j;
                }
            }
        }
        cout << x << space << y << space << mx << endl;
    }
    terminate;
}
