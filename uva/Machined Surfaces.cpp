/**/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std;

int main(){
    //ofstream out("out.txt");
    int n; cin >> n;
    while(n){
        string s[n];
        int hash[n];
        int cnt = 0;
        int min = 25;
        int total = 0;

        cin.ignore();

        for(int i = 0; i < n; ++i){
            getline(cin, s[i]);
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < 25; ++j){
                if(s[i][j] != 'X') cnt++;
            }
            if(cnt < min){
                min = cnt;
            }
            hash[i] = cnt;
            cnt = 0;
        }

        for(int i = 0; i < n; ++i){
            total += hash[i] - min;
        }

        cout << total << endl;

        cin >> n;
    }
    terminate;
}
