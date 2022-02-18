/*https://codeforces.com/contest/699/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    int n; cin >> n;
    int mom = 1000000000;
    char dir[n];
    int pos[n];
    for(int i = 0; i < n; ++i){
        cin >> dir[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> pos[i];
    }

    for(int i = 0; i < n - 1; ++i){
        if(dir[i] == 'R' && dir[i+1] == 'L'){
            if((pos[i+1]-pos[i])/2 < mom){
                mom = (pos[i+1]-pos[i])/2;
            }
        }
    }

    if(mom != 1000000000){
        cout << mom << endl;
    }else{
        cout << "-1" << endl;
    }

    terminate;
}