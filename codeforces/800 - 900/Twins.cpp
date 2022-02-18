/*https://codeforces.com/contest/160/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    int c[n];
    int total = 0, temp = 0, cnt = 0;
    for(int i = 0; i < n; ++i){
        cin >> c[i];
        total += c[i];
    }

    sort(c, c+n, greater<>());

    for(int i = 0; i < n; ++i){
        if(temp > total/2) break;
        temp += c[i];
        cnt++;
    }

    cout << cnt << endl;

    return 0; 
}
