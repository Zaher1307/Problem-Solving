/*https://codeforces.com/contest/9/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int y = 0, w = 0; cin >> y >> w;
    int d = 7 - max(w,y);
    int i = 0;
    for(i = d; i > 0; --i){
        if(6 % i == 0 && d % i == 0) break;
    }
    cout << d / i << '/' << 6 / i << endl;
    return 0; 
}