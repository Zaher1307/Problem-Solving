/*https://codeforces.com/contest/405/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main() 
{
    int num = 0;
    cin >> num;
    int arr[num];

    for(int i = 0; i < num; ++i){
        cin >> arr[i];
    }

    sort(arr, arr + num);

    for(int i = 0; i < num; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0; 
}