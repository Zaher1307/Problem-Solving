/*https://codeforces.com/contest/263/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main() 
{
    int arr[5][5], row = 0, col = 0, mov = 0;
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    mov = abs(2 - row) + abs(2 - col);
    cout << mov << endl;
    return 0; 
} 