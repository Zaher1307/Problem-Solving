/*https://codeforces.com/problemset/problem/271/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space " "
#define ll long long

using namespace std; 

bool isDistinct(int year){
    int d1 = year % 10;
    year /= 10;
    int d2 = year % 10;
    year /= 10;
    int d3 = year % 10;
    year /= 10;
    int d4 = year % 10;
    year /= 10;
    if(d1 != d2 && d1 != d3 && d2 != d3 && d2 != d4 && d3 != d4 && d4 != d1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int y; cin >> y;
    y++;
    while(!isDistinct(y)){y++;}
    cout << y << endl;
    terminate; 
}
