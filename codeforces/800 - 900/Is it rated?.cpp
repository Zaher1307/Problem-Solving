/*https://codeforces.com/contest/807/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >>n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i < n; ++i){
        if(a[i] != b[i]){
            cout << "rated" << endl;
            return 0;
        }
    }
    reverse(a, a+n);

    if(is_sorted(a, a+n)){
        cout << "maybe" << endl;
    }
    else{
        cout << "unrated" << endl;
    }

    return 0; 
}