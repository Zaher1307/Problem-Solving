/*https://codeforces.com/contest/709/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int res = 0;
    int n, b, d; cin >> n >> b >> d;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    
    int temp = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] <= b){
            temp += arr[i];
            if(temp > d){
                temp = 0;
                res++;
            }
        }
    }

    cout << res << endl;

    return 0; 
}