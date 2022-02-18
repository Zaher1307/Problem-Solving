/*https://codeforces.com/contest/782/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 


int main(){
    int n; cin >> n;
    vector<int> socks(n+1, 0);
    int temp;
    int table = 0, maxTable = 0;

    for(int i = 0; i < n*2; ++i){
        cin >> temp;
        if(socks[temp] == 0){
            table++;
            socks[temp] = 1;
        }else{
            table--;
        }
        maxTable = max(table, maxTable);
    }

    cout << maxTable << endl;

    terminate; 
}
