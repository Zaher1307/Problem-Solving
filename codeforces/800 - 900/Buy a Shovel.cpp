/*https://codeforces.com/contest/732/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int k = 0, r = 0, n = 1; cin >> k >> r;
    int temp = k;
    for(;;){
        if(k % 10 == 0) break;
        else if ((k - r) % 10 == 0) break;
        else {k += temp; n++;}
    }
    cout << n << endl;
    return 0; 
}