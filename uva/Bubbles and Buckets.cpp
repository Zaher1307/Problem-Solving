/*https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2490*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    int n; cin >> n;
    while(n){
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }

        
        ll invCnt = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                if(arr[i] > arr[j]) invCnt++;
            }
        }

        if(invCnt % 2 != 0) cout << "Marcelo" << endl;
        else cout << "Carlos" << endl;




        cin >> n;
    }
    terminate; 
}
