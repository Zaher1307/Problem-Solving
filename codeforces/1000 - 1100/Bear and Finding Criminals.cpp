/*https://codeforces.com/contest/680/problem/B*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    int n, a; cin >> n >> a;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        if(arr[i] == 1) sum++;
    }
    int dis;
    if(n - a > a - 1){
        dis = a - 1;
    }else{
        dis = n - a;
    }

    for(int i = 1; i <= dis; ++i){
        if(arr[a - i - 1] != arr[a + i - 1]){
            sum--;
        }
    }

    cout << sum << endl;

    terminate;
}