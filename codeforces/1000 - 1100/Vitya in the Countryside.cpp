/*https://codeforces.com/problemset/problem/719/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int n; cin >> n;
    int days[n];
    for(int i = 0; i < n; ++i){
        cin >> days[i];
    }

    if(n == 1){
        if(days[n-1] == 0){
            cout << "UP" << endl;
        }else if(days[n-1] == 15){
            cout << "DOWN" << endl;
        }else{
            cout << -1 << endl;
        }
    }else{ 
        int flag = days[n-1] - days[n-2];

        if(days[n-1] == 0){
            cout << "UP" << endl;
        }else if(days[n-1] == 15){
            cout << "DOWN" << endl;
        }else{
            if(flag > 0) cout << "UP" << endl;
            else cout << "DOWN " << endl;
        }
    }

    terminate; 
}
