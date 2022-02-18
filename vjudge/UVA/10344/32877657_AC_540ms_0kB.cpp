/*problem link: https://vjudge.net/problem/UVA-10344*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long
#define ull unsigned long long

using namespace std;

void IO(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifdef ZAHER
        freopen ("../in.txt", "r", stdin);
        freopen ("../out.txt", "w", stdout);
#endif
}

vector<int> v (5);

vector<int> res;

int evaluate(){
    int result = v[0];
    for(int i = 0; i < 4; ++i){
        if(res[i] == 1){
            result += v[i + 1];
        }
        if(res[i] == 2){
            result *= v[i  + 1];
        }
        if(res[i] == 3){
            result -= v[i + 1];
        }
    }

    return result == 23;
}

int solve(int index){
    //base case
    if(index == 4){
        return evaluate();
    }

    int ret = 0;

    res.push_back(1);
    ret |= solve(index + 1);
    res.pop_back();
    if(ret) return ret;
    res.push_back(2);
    ret |= solve(index + 1);
    res.pop_back();
    if(ret) return ret;
    res.push_back(3);
    ret |= solve(index + 1);
    res.pop_back();

    return ret;

}


    int main() {

    IO();

    for(int i = 0; i < 5; ++i){
        cin >> v[i];
    }
    while(accumulate(v.begin(), v.end(), 0ll)){
        sort(v.begin(), v.end());
        int final = 0;
        do{
            final |= solve(0);
            if(final) break;
        } while (next_permutation(v.begin(), v.end()));


        cout << (final ? "Possible" : "Impossible") << endl;
        for(int i = 0; i < 5; ++i){
            cin >> v[i];
        }
    }
    terminate;
}