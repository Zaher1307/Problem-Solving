/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=515*/

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

bool flag = false;
vector<int> subset;
set<vector<int>> s;

void bt(int index, vector<int> arr, int target){
    //base case
    if(index == arr.size()){
        int cnt = 0;
        for(auto item : subset){
            cnt += item;
        }
        if(cnt == target){
            if(s.find(subset) == s.end()){
                s.insert(subset);
                flag = true;
                for(int i = 0; i < subset.size(); ++i){
                    if(i != subset.size() - 1){
                        cout << subset[i] << '+';
                    }else{
                        cout << subset[i];
                    }
                }
                cout << endl;

            }
            
        }
        return;
    }
    subset.push_back(arr[index]);
    bt(index+1, arr, target);
    subset.pop_back();
    bt(index+1, arr, target);

}

int main(){
    IO();
    while(true){
        int t, n; cin >> t >> n;
        if(n == 0) break;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        
        cout << "Sums of " << t << ':' << endl;
        bt(0, arr, t);
        if(!flag){
            cout << "NONE" << endl;
        }

        flag = false;
        subset.clear();
        s.clear();
    }

    terminate;
}
