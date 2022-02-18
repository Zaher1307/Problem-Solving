/*https://codeforces.com/contest/1237/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    int num, flag = 1;
    while(n--){
        cin >> num;
        if(num % 2 == 0) {
            cout << num/2 << endl;
        }else{
            if(flag == 1){
                cout << (num+1)/2 << endl;
                flag = 0;
            }else{
                cout << (num-1)/2 << endl;
                flag = 1;
            }
        }
    }

    return 0; 
}