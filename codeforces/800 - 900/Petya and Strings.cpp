/*https://codeforces.com/contest/112/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main() 
{
    int res = 0;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); ++i){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        if(s1[i] < s2[i]){
            res = -1;
            break;
        }
        else if(s1[i] > s2[i]){
            res = 1;
            break;
        }
    }
    cout << res << endl;
    return 0; 
}