/*https://codeforces.com/problemset/problem/400/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int t; cin >> t;
    string s;
    vector<string> res;
    int cnt = 0;
    
    while(t--){
        cin >> s;
        if(s.find('X') == string::npos){
            cout << 0 << endl;
            continue;
        }else{
            cnt++;
            res.push_back("1x12 ");

            for(int i = 0; i < 6; ++i){
                if(s[i] == 'X' && s[i+6] == 'X'){
                    cnt++;
                    res.push_back("2x6 ");
                    break;
                }
            }

            for(int i = 0; i < 4; ++i){
                if(s[i] == 'X' && s[i+4] == 'X' && s[i+8] == 'X'){
                    cnt++;
                    res.push_back("3x4 ");
                    break;
                }
            }

            for(int i = 0; i < 3; ++i){
                if(s[i] == 'X' && s[i+3] == 'X' && s[i+6] == 'X' && s[i+9] == 'X'){
                    cnt++;
                    res.push_back("4x3 ");
                    break;
                }
            }

            for(int i = 0; i < 2; ++i){
                if(s[i] == 'X' && s[i+2] == 'X' && s[i+4] == 'X' && s[i+6] == 'X' && s[i+8] == 'X' && s[i+10] == 'X'){
                    cnt++;
                    res.push_back("6x2 ");
                    break;
                }
            }

            if(s.find('O') == string::npos){
                cnt++;
                res.push_back("12x1 ");
            }
        }

        cout << cnt << space;
        for(auto c : res){
            cout << c;
        }
        cout << endl;


        cnt = 0;
        res.clear();
    }
        
    terminate; 
}
