/*https://codeforces.com/contest/158/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "
#define ll long long

using namespace std; 
  
int main(){
    int n; cin >> n;
    int k; cin >> k;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int score = arr[k-1], cnt = 0;

    for(int i = 0; i < n; ++i){
        if(arr[i] >= score && arr[i] > 0){
            cnt++;
        }
    }

    cout << cnt << endl;

    terminate; 
}
