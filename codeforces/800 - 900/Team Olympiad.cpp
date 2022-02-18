/*https://codeforces.com/contest/490/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int n; cin >> n;
    int w = 5000;
    int hs[3]{0}, arr[n]{0};

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        hs[arr[i]-1]++;
    }

    for(int i = 0; i < 3; ++i){
        if(hs[i] < w) w = hs[i];
    }

    cout << w << endl;

    int p[hs[0]];
    int m[hs[1]];
    int pe[hs[2]];
    
    int i1 = 0, i2 = 0, i3 = 0; 

    for(int i = 0; i < n; ++i){
        if(arr[i] == 1){
            p[i1++] = i + 1;
        }
        else if(arr[i] == 2){
            m[i2++] = i + 1;
        }
        else if(arr[i] == 3){
            pe[i3++] = i + 1;
        }
    }

    for(int i = 0; i < w; ++i){
        cout << p[i] << ' ' << m[i] << ' ' << pe[i] << endl;
    }

    return 0; 
}