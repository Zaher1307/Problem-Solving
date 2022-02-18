/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=235*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n]; 
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        int invCnt = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                if(arr[i] > arr[j]) invCnt++;
            }
        }
        cout << "Optimal train swapping takes " << invCnt << " swaps." << endl;
    }
    terminate; 
}
