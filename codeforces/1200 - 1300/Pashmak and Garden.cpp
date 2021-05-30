/*https://codeforces.com/problemset/problem/459/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2 && y1 != y2){
        cout << x1 + abs(y1 - y2) << space << y1 << space << x1 + abs(y1 - y2) << space << y2 << endl; 
    }else if(y1 == y2 && x1 != x2){
        cout << x1 << space << y1 + abs(x1 - x2) << space << x2 << space << y2 + abs(x1 - x2) << endl;
    }else if(abs(x1 - x2) == abs(y1 - y2)){
        cout << x2 << space << y1 << space << x1 << space << y2 << endl;
    }else{
        cout << -1 << endl;
    }
    terminate; 
}
