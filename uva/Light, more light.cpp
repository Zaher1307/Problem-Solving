/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    unsigned int n, sq;
    while(cin >> n && n != 0){
        sq = sqrt(n);
        cout << (sq * sq == n ? "yes" : "no") << endl;
    }
    return 0; 
}