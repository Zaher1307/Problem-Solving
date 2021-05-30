/*https://codeforces.com/contest/768/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    int min = pow(10,9);
    int max = 0;
    int count = 0;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    for(int i = 0; i < n; ++i){
        if(arr[i] > min && arr[i] < max) count++;
    }

    cout << count << endl;

    return 0; 
}