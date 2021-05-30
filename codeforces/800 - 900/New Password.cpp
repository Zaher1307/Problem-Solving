/*https://codeforces.com/contest/770/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n, k; cin >> n >> k;
    char arr[26];
    for(int i = 0; i < 26; ++i){
        arr[i] = 'a' + i;
    }

    for(int i = 0; i < k; ++i){
        cout << arr[i];
        n--;
    }

    int c = 0;
    for(int i = 0; i < n; ++i){
        cout << arr[c++];
        if(c >= k) c  = 0;
    }
    cout << endl;

    return 0; 
}