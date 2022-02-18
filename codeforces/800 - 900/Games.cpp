/*https://codeforces.com/contest/268/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n = 0, t = 0; cin >> n;
    int arr[n][2];

    for(int j = 0; j < n; ++j){
        for(int i = 0; i < 2; ++i){
            cin >> arr[j][i];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i == j) continue;
            if(arr[i][0] == arr[j][1]) t++;
        }
    }

    cout << t << endl;    

    return 0; 
}