/*https://codeforces.com/contest/228/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    set<int> s;
    int arr[4];
    for(int i = 0; i < 4; ++i){
        cin >> arr[i];
        s.insert(arr[i]);
    }
    cout << 4 - s.size() << endl;
    return 0; 
}