/**/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main(){
    int s = 0, d = 0, n = 0; cin >> n;
    int cards[n];

    for(int i = 0; i < n; ++i){
        cin >> cards[i];
    }

    int f = 0, l = n - 1;
    for(int i = 0; i < n; ++i){
        if (i % 2 == 0){
            if (cards[f] > cards[l]){
                s += cards[f];
                f++;
            }else{
                s += cards[l];
                l--;
            }
        }else{
            if (cards[f] > cards[l]){
                d += cards[f];
                f++;
            }else{
                d += cards[l];
                l--;
            }
        }
        
    }    

    cout << s << " " << d << endl;
    return 0; 
}