/*https://codeforces.com/contest/791/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main() 
{
    int limak = 0, bob = 0, year = 0;
    cin >> limak >> bob;
    while(limak <= bob){
        limak *= 3;
        bob *= 2;
        year++;
    }
    cout << year;
    return 0; 
} 