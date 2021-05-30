/*https://codeforces.com/problemset/problem/705/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "

using namespace std; 
  
int main(){
    int n; cin >> n;
    int flag = 1;
    while(n--){
        if(flag == 0){
            cout << "I love";
            flag = 1;
        }else{
            cout << "I hate";
            flag = 0;
        }
        if (n >= 1) cout << " that ";
    }
    cout << " it";
    terminate; 
}
