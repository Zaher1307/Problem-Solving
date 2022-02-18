/*https://codeforces.com/contest/165/problem/B*/

#include <bits/stdc++.h>
#define terminate return 0

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int sum(int v, int k){
    int res = 0, i = 0;
    while(floor(v/pow(k, i))){
        res += floor(v/pow(k, i++));
    }
    return res;
}

int main(){
    int n, k; cin >> n >> k;
    int st = 1, end = n, mid;
    int v = 0;
    while(st <= end){
        mid = (st + end) / 2;
        if(sum(mid, k)>=n){
            v = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }

    cout << v << endl;

    terminate;
}