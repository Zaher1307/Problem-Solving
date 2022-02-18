/*https://codeforces.com/contest/225/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n, x; cin >> n >> x;
    int a, b, arr[4] = {0};
    int down = 0;
    cin >> a >> b;
    down = 21 - (x + a + b + 14 - (a + b));
    n--;
    while(n--){
        cin >> a >> b;
        arr[0] = a; arr[1] = b; arr[2] = 7 - a; arr[3] = 7 - b;
        for(int i = 0; i < 4; ++i){
            if(down == arr[i]){
                cout << "NO" << endl;
                return 0;
            }
        }
        down = 7 - down;
    }
    
    cout << "YES" << endl;
    
    return 0; 
}