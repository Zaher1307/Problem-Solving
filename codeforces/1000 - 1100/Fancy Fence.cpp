/*https://codeforces.com/contest/270/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    int n; cin >> n;
    int a;
    double l;
    while (n--){
        cin >> a;
        if(a == 60) {
            cout << "YES" << endl;
            continue;
        }
        else if(a < 60 || a > 180){
            cout << "NO" << endl;
            continue;
        }
        if(a == 60) cout << "YES" << endl;
        l = 2 / (1 - ((double)a/180));
        if(l - (int)l > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    terminate;
}