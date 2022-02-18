/*https://codeforces.com/problemset/problem/621/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "
#define ll long long

using namespace std; 

ll Min(ll n1, ll n2){
    if(n1 > n2){
        return n2;
    }else{
        return n1;
    }
}
  
int main(){
    ll n; cin >> n;
    ll arr[n];
    ll sum = 0, min = LONG_LONG_MAX, temp;
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; ++i){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }else{
            temp = arr[i];
            min = Min(min, temp);
            sum += arr[i];
            cnt++;
        }
    }

    if(cnt % 2 != 0){
        sum -= min;
    }

    cout << sum  << endl;
    terminate; 
}
