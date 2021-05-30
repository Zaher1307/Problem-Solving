/**/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    long long n, x; cin >> n >> x;
    int dis = 0;
    char op[n]; int num[n];
    for(int i = 0; i < n; ++i){
        cin >> op[i] >> num[i];

        if(op[i] == '+') x += num[i];
        else if (op[i] == '-'){
            if(num[i] <= x) x -= num[i];
            else if(num[i] > x) dis++;
        }

    }

    cout << x  << ' ' << dis << endl;

    
    return 0; 
}