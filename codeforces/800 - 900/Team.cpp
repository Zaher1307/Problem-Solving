/*https://codeforces.com/contest/231/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main() 
{
    int num = 0, sol = 0, p = 0, v = 0, t = 0;
    cin >> num;
    for(int i = 0; i < num; ++i){
        cin >> p >> v >> t;
        if(p + v + t > 1)
            sol++;
    }
    cout << sol << endl;
    return 0; 
} 