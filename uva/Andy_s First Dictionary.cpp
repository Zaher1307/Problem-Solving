/*https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1756*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    string s, s1;
    set <string> ds;
    vector<string> vect;

    while(getline(cin, s1)){
        for(int i = 0; i < s1.size(); ++i){
            if(s1[i] >= 'A' && s1[i] <= 'Z'){
                s1[i] = tolower(s1[i]);
            }else if(s1[i] >= 'a' && s1[i] <= 'z'){
                continue;
            }else{
                s1[i] = space;
            }
        }
        s += s1;
    }

    int i = 0, j = 0;
    vect.resize(1);
    while(j < s.size()){
        if(s[j] == ' '){ 
            i++; 
            vect.resize(i+1);
        }else{
            vect[i] += s[j];
        }
        j++;
    }
    
    

    for(auto it:vect){
        if(it.size()) ds.insert(it);
    }
    for(auto it:ds){
        cout << it << endl;
    }


    terminate; 
}
