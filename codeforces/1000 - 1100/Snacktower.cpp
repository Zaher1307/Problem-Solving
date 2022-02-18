/*https://codeforces.com/problemset/problem/767/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    int c = 0;
    int temp = n;
    int arr[n], hash[n]{0};
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i < n; ++i){
        if(arr[i] == temp){
            cout << temp << ' ';
            temp--;
            while(c && hash[temp] == 1){
                cout << temp << ' ';
                temp--;
                c--;
            }
            cout << endl;
        }
        else{
            cout << endl;
            hash[arr[i]] = 1;
            c++;
        }
    }
    return 0; 
}