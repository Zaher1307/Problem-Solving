/*https://codeforces.com/contest/1204/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    string s; cin >> s;
    int a = s.size();
    if(a % 2 == 0){
        cout << a/2 << endl;
        return 0;
    }else{
        for(int i = 1; i < a; ++i){
            if(s[i] == '1'){
                cout << (a+1)/2 << endl;
                return 0;
            }
        }
    }

    cout << a/2 << endl;

    
    return 0; 
}