/*https://codeforces.com/contest/404/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >>n;
    char arr[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> arr[i][j];
        }
    }

    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j == i){
                if(arr[i][j] != arr[0][0]){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else if(j == n-1-i){
                if(arr[i][j] != arr[0][0]){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else{
                if(arr[i][j] != arr[0][1]){
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    if(arr[0][0] != arr[0][1]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    

    return 0; 
}