/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3701*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std; 
  
int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    IO;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        ll sum = 0;
        for(int i = 1; i < n; ++i){
            for(int j = 0; j < i; ++j){
                if(arr[j] <= arr[i]){
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
    
    terminate; 
}
