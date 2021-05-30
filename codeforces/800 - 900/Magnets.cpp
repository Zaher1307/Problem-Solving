/*https://codeforces.com/contest/344/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n = 0, c = 0;
    cin >> n;
    string arr[n];

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i){
        if(arr[i] != arr[i + 1])
            c++;
    }

    cout << c << endl;
    
    return 0; 
}