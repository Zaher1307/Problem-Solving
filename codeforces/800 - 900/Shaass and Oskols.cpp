/*https://codeforces.com/contest/294/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    int line[n];
    for(int i = 0; i < n; ++i){
        cin >> line[i];
    }

    int s; cin >> s;
    for(int i = 0; i < s; ++i){
        int x, y; cin >> x >> y;
        if(x == 1) {
            line[(x - 1) + 1] += line[(x - 1)] - y;
            line[(x - 1)] = 0;
        }else if (x == n){
            line[(x - 1) - 1] += y - 1;
            line[(x - 1)] = 0;
        } else
        {
            line[(x - 1) + 1] += line[(x - 1)] - y;
            line[(x - 1) - 1] += y - 1;
            line[(x - 1)] = 0;
        }
    }

    for(int i = 0; i < n; ++i){
        cout << line[i] << endl;
    }
    return 0; 
}