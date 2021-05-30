/*https://codeforces.com/contest/80/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 

int isPrime(int num){
    for(int i = 2; i < num; ++i){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
  
int main(){
    int n, m; cin >> n >> m;
    if(isPrime(m)){
        for(int i = n + 1; i <= m; ++i){
            if(isPrime(i)){
                if(i == m){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
                break;
            }
        }
    }else{
        cout << "NO" << endl;
    }
    

    return 0; 
}

