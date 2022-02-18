/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=565*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define ull unsigned long long
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std; 

int n, maxNum;
ll numOfOperations;
vector<int> subset;

void bt(int index, vector<int>& arr, vector<int>& target){

    if(index == arr.size()){
        int sum = 0; 
        for(auto item : subset){
            sum += item;
        }
        if(sum > maxNum && sum <= n){
            maxNum = sum;
            target.clear();
            for(auto item : subset){
                target.push_back(item);
            }
        }
        return;
    }

    numOfOperations++;
    subset.push_back(arr[index]);
    bt(index + 1, arr, target);
    subset.pop_back();
    bt(index + 1, arr, target);
    

}

int main(){
    #ifdef zaher
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
    IO;

    while(cin >> n){
        maxNum = 0;
        int numOfTracks; cin >> numOfTracks;
        vector<int> duration;
        for(int i = 0; i < numOfTracks; ++i){
            int temp; cin >> temp;
            duration.push_back(temp);
        }

        vector<int> collection;
        bt(0, duration, collection);
        for(auto item : collection){
            cout << item << space;
        }

        cout << "sum:" << maxNum << endl;

    }



    terminate; 
}
