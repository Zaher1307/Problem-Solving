/*https://codeforces.com/problemset/problem/675/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int a, b, c; cin >> a >> b >> c;
    int flag = 0;

    if(c > 0){
        flag = 1;
    }
    if(a == b){
        cout << "YES" << endl;
    }else if(a != b && c == 0){
        cout << "NO" << endl;
    }else if((b - a) % c == 0){
        if(flag == 1 && b > a){
            cout << "YES" << endl;
        }else if(flag == 0 && b < a){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }else{
        cout << "NO" << endl;
    }

    terminate; 
}
