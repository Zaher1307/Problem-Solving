/*https://codeforces.com/contest/59/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main() 
{
    string s;
    cin >> s;
    int u = 0, l = 0;
    for(int i = 0; i < s.length(); ++i){
        if(isupper(s[i])) u++;
        else l++;
    }
    if(l >= u) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;
    return 0; 
}