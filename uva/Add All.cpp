/*https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1895*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std;

int main(){
    ofstream out("out.txt");
    int n; cin >> n;
    int ip;
    while(n){
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 0; i < n; ++i){
            cin >> ip;
            q.push(ip);
        }
        int total = 0;
        while(q.size()-1){
            int temp = 0;
            temp += q.top();
            q.pop();
            temp += q.top();
            q.pop();

            total += temp;
            q.push(temp);
        }
        //total += q.top();
        q.pop();

        cout << total << endl;

        cin >> n;
    }


    terminate;
}
