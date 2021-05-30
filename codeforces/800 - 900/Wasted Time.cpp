/*https://codeforces.com/contest/127/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int x ,y, a, b;
    double dis = 0;
    cin >> x >> y;
    a = x; b = y;
    n--;
    while(n--){
        cin >> x >> y;
        dis += (double)sqrt(pow(y-b, 2)+pow(x-a, 2));
        a = x; b = y;
    }

    dis = (dis/50) * k;

    printf("%.6f", dis);

    terminate;
}