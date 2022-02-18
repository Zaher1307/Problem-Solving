/*https://codeforces.com/problemset/problem/813/B*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define ull unsigned long long

using namespace std; 

void IO(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifdef zaher
        freopen("../../in.txt", "r", stdin);
        freopen("../../out.txt", "w", stdout);
    #endif
}

ull powerLL(ll base, ll power){
    ull ans = 1; 
    while(power--){
        ans *= base;
    }
    return ans;
}

int main(){
    IO();
    ll x, y, l, r; cin >> x >> y >> l >> r;
    vector<ll> xvect;
    vector<ll> yvect;
    vector<ll> all;
    int a = log(r) / log(x);
    int b = log(r) / log(y);
    for(int i = 0; i <= a ; ++i){
        ull p = powerLL(x, i);
        xvect.push_back(p);
    }
    for(int i = 0; i <= b ; ++i){
        ull p = powerLL(y, i);
        yvect.push_back(p);
    }
    for(int i = 0; i < xvect.size(); ++i){
        for(int j = 0; j < yvect.size(); ++j){
            if(xvect[i] + yvect[j] >= l && xvect[i] + yvect[j] <= r){
                all.push_back(xvect[i] + yvect[j]);
            }
        }
    }
    sort(all.begin(), all.end());
    ll mx = 0;
    if(all.size()){
        mx = max(all[0] - l, r - all[all.size()-1]);
        for(ll i = 1; i < all.size(); ++i){
            mx = max(mx, all[i] - all[i-1] - 1);
        }
    }else{
        mx = r - l + 1;
    }
    cout << mx << endl;
    terminate;
}
