/*https://codeforces.com/contest/667/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;
#define MPI (acos(-1))
int main(){
    double d, h, v, e; cin >> d >> h >> v >> e;
    double a, dec;
    double t;
    a = pow(d, 2) * MPI/4;
    dec = v/a;
    if (e >= dec){
        cout << "NO" << endl;
        terminate;
    }else{
        t = h/(dec-e);
    }
    cout << "YES" << endl;
    printf("%.8f", t);

    terminate;
}