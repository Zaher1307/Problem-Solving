/*https://codeforces.com/problemset/problem/147/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std;

bool isLetter(char c){
    if(c <= 'z' && c >= 'a'){
        return true;
    }
    return false;
}

int main(){
    string s; getline(cin, s);
    int markFlag = 0;
    for(int i = 0; i < s.size(); ++i){
        if(isLetter(s[i])){
            cout << s[i];
            markFlag = 0;
        }else if(s[i] == space && isLetter(s[i+1]) && markFlag == 0){
            cout << space;
        }else if(s[i] != space && !isLetter(s[i])){
            cout << s[i] << space;
            markFlag = 1;
        }
    }
    cout << endl;
    terminate;
}
