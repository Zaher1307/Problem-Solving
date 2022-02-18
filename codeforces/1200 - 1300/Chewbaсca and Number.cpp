/*https://codeforces.com/contest/514/problem/A*/

#include <bits/stdc++.h>
#define return 0 terminate

using namespace std; 
  
int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] < '5'){
            cout << s[i];
        }
        else if(s[i] == '9'){
            if(i == 0){
                cout << '9';
            }else{
                cout << '0';
            }
        }else{
            cout << '9'-s[i];
        }
    }
    cout << endl;
    terminate; 
}