/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "
#define ll long long

using namespace std;

int main(){
    int b, n; cin >> b >> n;

    while (b != 0 && n != 0){
        int mr[b];
        int deb[n][3];

        for(int i = 0; i < b; ++i){
            cin >> mr[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> deb[i][0];
            cin >> deb[i][1];
            cin >> deb[i][2];
        }

        for(int i = 0; i < n; ++i){
            mr[deb[i][0] - 1] -= deb[i][2];
            mr[deb[i][1] - 1] += deb[i][2];
        }

        for(int i = 0; i < b; ++i){
            if(mr[i] < 0){
                cout << 'N'<< endl;
                break;
            }

            if(i == b - 1){
                cout << 'S' << endl;
            }
        }



        cin >> b >> n;
    }
    terminate;
}
