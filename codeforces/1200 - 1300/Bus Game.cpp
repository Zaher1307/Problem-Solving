/*https://codeforces.com/problemset/problem/79/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
bool ceilTurn(int &yen100, int &yen10){
    int req = 220;
    while(req > 20 && yen100 >= 100){
        if(yen100 - 100 >= 0){
            yen100 -= 100;
            req -= 100;
        }
    }

    while(req > 0 && yen10 >= 10){
        if(yen10 - 10 >= 0){
            yen10 -= 10;
            req -= 10;
        }
    }

    return !req;
}

bool hanakoTurn(int &yen100, int &yen10){
    int req = 220;
    if(yen10 >= 20){
        yen10 -= 20;
        req -= 20;
    }
    while(req >= 100 && yen10 >= 100){
        yen10 -= 100;
        req -= 100;
    }

    while(req >= 100 && yen100 >= 100){
        yen100 -= 100;
        req -= 100;
    }

    return !req;
}



int main(){
    int x, y; cin >> x >> y;
    int yen100 = x * 100;
    int yen10 = y * 10;

    while(true){
        if(!ceilTurn(yen100, yen10)){
            cout << "Hanako" << endl;
            break;
        }
        if(!hanakoTurn(yen100, yen10)){
            cout << "Ciel" << endl;
            break;
        }
    }

    terminate; 
}
