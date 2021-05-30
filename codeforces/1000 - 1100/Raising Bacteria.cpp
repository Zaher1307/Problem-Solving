/*https://codeforces.com/contest/579/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int x; cin >> x;
    int res = 0;
    while(x){
        if(x%2 == 1){
            res++;
        }
        x /= 2;
    }

    cout << res << endl;

    return 0; 
}