/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3768*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define ull unsigned long long

using namespace std; 

void IO(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifdef zaher
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}
int vol, tim;
vector<int> subset;
void bt(int index, vector<int> flow, vector<int> cost, ll& minCost){
    // base case
    if(index == flow.size()){
        ll sumFlow = 0, totalCost = 0;
        for(int i = 0; i < subset.size(); ++i){
            sumFlow += flow[subset[i]] * tim;
            totalCost += cost[subset[i]];
        }
        if(sumFlow >= vol && totalCost < minCost){
            minCost = totalCost;
        }
        return;
    }


    subset.push_back(index);
    bt(index + 1, flow, cost, minCost);
    subset.pop_back();
    bt(index + 1, flow, cost, minCost);
}

int main(){
    IO();
    int n; cin >> n;
    vector<int> flow(n);
    vector<int> cost(n);
    for(int i = 0; i < n; ++i){
        cin >> flow[i] >> cost[i];
    }
    int t; cin >> t;
    //code
    for(int i = 1; i <= t; ++i){
        cout << "Case " << i << ": ";
        ll minCost = INT_MAX;
        cin >> vol >> tim;
        bt(0, flow, cost, minCost);
        if(minCost < INT_MAX){
            cout << minCost << endl;
        }else{
            cout << "IMPOSSIBLE" << endl;
        }



    }
    terminate;
}
