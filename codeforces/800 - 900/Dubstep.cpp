/*https://codeforces.com/contest/208/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'U' && s[i-1] == 'W' && s[i+1] == 'B'){
            if(i == 1){
                s.erase(0, 3);
                i = 0;
            }else{
                s.replace(i-1, 3, " ");
                i = 0;
            }
        }
    }

    cout << s << endl;
    return 0; 
}