/*https://codeforces.com/contest/296/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int hash[1000] = {0};
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i < n; ++i){
        hash[arr[i]-1]++;
    }


    for(int i = 0; i < 1000; ++i){
        if(hash[i] > cnt) cnt = hash[i];
    }

    if(cnt > (n+1)/2) cout << "NO" << endl;
    else cout << "YES" << endl;

    terminate;
}