/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=358*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    map<string, int> word;
    queue<string> q;
    

    int i = 1;
    for(char c = 'a'; c <= 'z'; ++c){
        string s;
        s += c;
        q.push(s);
    }
    while(q.size()){
        string s = q.front();
        word.insert({s, i++});
        q.pop();
        if(s.size() < 5){
            for(char c = s[s.size()-1]+1; c <= 'z'; ++c){
                q.push(s+c);
            }
        }
    }

    string ip;
    while(cin >> ip){
        auto item = word.find(ip);
        if(item == word.end()){
            cout << 0 << endl;
        }else{
            cout << item->second << endl;
        }
    }

    terminate; 
}
