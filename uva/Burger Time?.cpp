/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2708*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "
#define ll long long

using namespace std; 
  
int main(){
    int dis = INT_MAX;
    int l; cin >> l;
    string s;
    while (l != 0){
        cin >> s;
        vector<int> r;
        vector<int> d;

        for(int i = 0; i < s.size(); ++i){
            if(s[i] == 'R'){
                r.push_back(i);
            }else if(s[i] == 'D'){
                d.push_back(i);
            }else if(s[i] == 'Z'){
                dis = 0;
            }else{
                continue;
            }
        }

        for(int i = 0; i < r.size(); ++i){
            for(int j = 0; j < d.size(); ++j){
                if(abs(r[i]-d[j]) < dis){
                    dis = abs(r[i]-d[j]);
                }
            }
        }
        
        cout << dis << endl;

        r.clear();
        d.clear();
        dis = INT_MAX;

        cin >> l;
    }
    terminate; 
}
