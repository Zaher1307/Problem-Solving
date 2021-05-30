/*https://codeforces.com/contest/218/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n, k; cin >> n >> k;
    int arr[2*n + 1];
    for(int i = 0; i < 2*n + 1; ++i){
        cin >> arr[i]; 
    }

    for (int i = 0; i < 2 * n + 1; ++i)
    {
        if (i % 2 == 1 && arr[i]-1 > arr[i + 1] && arr[i]-1 > arr[i - 1] && k > 0){
            k--;
            cout << arr[i]-1 << ' ';
        }else{
            cout << arr[i] << ' ';
        }
    }
    cout << endl;
    return 0; 
}