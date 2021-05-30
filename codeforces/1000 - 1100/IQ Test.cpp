/*https://codeforces.com/contest/287/problem/A*/

#include <bits/stdc++.h>
#define terminate return 0

using namespace std;

int main(){
    char arr[4][4];
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j) {


            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+1][j+1]){
                cout << "YES" << endl;
                terminate;
            }

        }
    }

    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j) {
            if (arr[i][j] == '#') arr[i][j] = '.';
            else arr[i][j] = '#';

            for(int k = 0; k < 3; ++k){
                for(int l = 0; l < 3; ++l){
                    if(arr[k][l] == arr[k][l+1] && arr[k][l] == arr[k+1][l] && arr[k][l] == arr[k+1][l+1]){
                        cout << "YES" << endl;
                        terminate;
                    }
                }
            }

            if(arr[i][j] == '#') arr[i][j] = '.';
            else arr[i][j] = '#';
        }
    }


    cout << "NO" << endl;
    terminate;
}