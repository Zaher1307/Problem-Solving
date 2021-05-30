/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552*/

#include <bits/stdc++.h>
#define terminate return 0

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

ll upperSearch(vector<ll> &v, ll num){
    ll st = 0, end = (ll)v.size()-1;
    ll mid = 0, up = 0;
    while(st <= end){
        mid = (st + end) / 2;
        if(v[mid] > num){
            up = v[mid];
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return up;
}

ll lowerSearch(vector<ll> &v, ll num){
    ll st = 0, end = (ll)v.size()-1;
    ll mid = 0, down = 0;
    while(st <= end){
        mid = (st + end) / 2;
        if(v[mid] < num){
            down = v[mid];
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return down;
}

int main(){
    ll n; cin >> n;
    vector<ll> ladyList(n);
    for(int i = 0; i < n; ++i){
        cin >> ladyList[i];
    }

    ll q; cin >> q;
    vector<ll> queryList(q);
    for(int i = 0; i < q; ++i){
        cin >> queryList[i];
    }

    ll upper, lower;

    for(int i = 0; i < q; ++i){
        upper = upperSearch(ladyList, queryList[i]);
        lower = lowerSearch(ladyList, queryList[i]);

        if(lower) cout << lower << ' ';
        else cout << "X ";

        if(upper) cout << upper;
        else cout << "X";

        cout << endl;
    }

    terminate;
}
