/*https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=417*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    char type; cin >> type;
    double lx[10] = {0}, rx[10] = {0}, uy[10] = {0}, ly[10] = {0};
    double px, py;
    int it1 = 0, flag = 0;
    while(type == 'r'){
        cin >> lx[it1] >> uy[it1] >> rx[it1] >> ly[it1];
        cin >> type;
        it1++;
    }

    int p = 1;
    while(true){
        cin >> px>> py;
        if(px == 9999.9 && py == 9999.9){
            break;
        }
        for(int j = 0; j < it1; ++j){
            if((px > lx[j] && px < rx[j]) && (py > ly[j] && py < uy[j])){
                cout << "Point " << p << " is contained in figure " << j + 1 << endl;
                flag = 1;
            }
        }
        if(flag == 0){
            cout << "Point " << p << " is not contained in any figure" << endl;
        }
        flag = 0;
        p++;
    }


    terminate;
}