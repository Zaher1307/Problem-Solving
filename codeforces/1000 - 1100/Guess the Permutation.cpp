/*https://codeforces.com/problemset/problem/618/B*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "
#define ll long long

using namespace std;


bool isExist(int num, int a[], int n){
    for(int i = 0; i < n; ++i){
        if(num == a[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n][n];
    int p[n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        p[i] = 0;
    }

    int max = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
        if(!isExist(max, p, n)){
            p[i] = max;
        }else{
            p[i] = max + 1;
        }
        max = 0;
    }

    for(int i = 0; i < n; ++i){
        cout << p[i] << space;
    }
    cout << endl;
    terminate;
}
