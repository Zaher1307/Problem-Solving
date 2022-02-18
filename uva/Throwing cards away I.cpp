/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1876*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    int n; cin >> n;
    while(n){
        queue <int> q;
        for(int i = 1; i <= n; ++i){
            q.push(i);
        }
        out << "Discarded cards:";
        bool flag = true;
        while(q.size() > 1){
            if(flag == true){
                if(q.size() == n) out << " ";
                out << q.front();
                q.pop();
                if(q.size() != 1) out << ", ";
                flag = false;
            }else{
                q.push(q.front());
                q.pop();
                flag = true;
            }
        }
        out << endl;
        out << "Remaining card: " << q.front() << endl;
        q.pop();

        cin >> n;
    }
    terminate; 
}
