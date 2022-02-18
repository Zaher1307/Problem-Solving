/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    IO;
    
    int n;cin >> n;
    while(n){
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(int i = 0; i < n; ++i){
            if(i < n-1) cout << arr[i] << space;
            else cout << arr[i];
        }
        cout << endl;
        cin >> n;
    }
    terminate; 
}
