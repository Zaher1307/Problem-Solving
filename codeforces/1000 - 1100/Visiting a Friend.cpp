/*https://codeforces.com/problemset/problem/902/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int location; cin >> location;
    int x[n], y[n];
    bool flag = true;
    int max = 0, min = INT_MAX;
    for(int i = 0; i < n ; ++i){
        cin >> x[i] >> y[i];
    }
    min = x[0];
    max = y[0];
    for(int i = 1; i < n; ++i){
        if(y[i] >= max && x[i] <= max){
            max = y[i];
        }
    }
    if(flag && max >= location && min <= 0) cout << "YES" << endl;
    else cout << "NO" << endl;


    terminate;
}
