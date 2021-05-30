/*https://codeforces.com/contest/339/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    string s; cin >> s;
    int arr[3] = {0};
    for(int i = 0; i < s.size(); ++i){
        if(isdigit(s[i])) arr[s[i]-'0'-1]++;
    }

    for(int i = 0; i < 3; ++i){
        while(arr[i] != 0){
            cout << i+1;
            arr[i]--;
            if(arr[i] > 0 || (arr[i+1] > 0 && i+1 < 3) || (arr[i+2] > 0 && i+2 < 3)) cout << '+';
        }
    }

    cout << endl;


    return 0; 
}