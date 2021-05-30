/*https://codeforces.com/contest/469/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n, p, q; cin >> n;
    set<int> s;
    int temp = 0;
    cin >> p;
    for(int i = 0; i < p; ++i){
        cin >> temp;
        s.insert(temp);
    }

    cin >> q;
    for(int i = 0; i < q; ++i){
        cin >> temp;
        s.insert(temp);
    }


    if(s.size() < n){
        cout << "Oh, my keyboard!" << endl;
    }
    else{
        cout << "I become the guy." << endl;
    }
    return 0; 
}