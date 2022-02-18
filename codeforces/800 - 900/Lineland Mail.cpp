/*https://codeforces.com/contest/567/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    int max = 0, min = 0;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i < n; ++i){
        if(i == 0){
            min = abs(arr[i]-arr[i+1]);
            max = abs(arr[i]- arr[n-1]);
            cout << min << ' ';
            cout << max;
        }
        else if(i == n-1){
            min = abs(arr[i]-arr[i-1]);
            max = abs(arr[i]-arr[0]);
            cout << min << ' ';
            cout << max;
        }
        else{
            min = (abs(arr[i]-arr[i-1]) < abs(arr[i]-arr[i+1])) ? abs(arr[i]-arr[i-1]) : abs(arr[i]-arr[i+1]);
            max = (abs(arr[i]-arr[n-1]) > abs(arr[i]-arr[0])) ? abs(arr[i]-arr[n-1]) : abs(arr[i]-arr[0]);
            cout << min << ' ';
            cout << max;
        }
        cout << endl;
    }    

    return 0; 
}