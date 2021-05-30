/*https://codeforces.com/contest/427/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n = 0, p = 0, c = 0; cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        if(arr[i] > 0) p+= arr[i];
        else if(arr[i] < 0 && p < 1) c++;
        else if(arr[i] < 0 && p > 0) p--;
    }
    cout << c << endl;

    return 0; 
}