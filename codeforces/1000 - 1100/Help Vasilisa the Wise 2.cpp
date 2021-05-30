/*https://codeforces.com/contest/143/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std; 
  
int main(){
    int r1, r2, c1, c2, d1, d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for(int i = 1; i < 20; ++i){
        for(int j = 1; j < 10; ++j){
            for (int k = 1; k < 10; ++k){
                for (int l = 1; l < 10; ++l){
                    if((i+j == r1 && i != j) && (k+l == r2 && k != l) && (i+k == c1 && i != k) && (j+l == c2 && j != l) && (i+l == d1 && i != l) && (j+k == d2 && j != k)){
                        cout << i << ' ' << j << endl;
                        cout << k << ' ' << l << endl;
                        terminate;
                    }
                }
            }
        }
    }
    cout << "-1" << endl;
    terminate; 
}