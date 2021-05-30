/*https://codeforces.com/contest/66/problem/B*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int max = 1, cnt = 1;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i < n; ++i){
        cnt = 1;
        for(int j = i; j < n; ++j){
            if(arr[j+1] > arr[j]) break;
            else{
                cnt++;
            }
        }

        for(int k = i; k > 0 ; --k){
            if(arr[k-1] > arr[k]) break;
            else{
                cnt++;
            }
        }
        if(cnt > max) max = cnt;
    }

    cout << max << endl;

    terminate;
}