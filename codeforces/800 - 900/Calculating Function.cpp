/*https://codeforces.com/contest/486/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    long long n ; cin >> n;
    if (n % 2 == 1){
        cout << (-1) * (n + 1) / 2 << endl;
    }else{
        cout << n / 2 << endl;
    }
    return 0; 
}