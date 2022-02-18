/**/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    string s; 
    int q, p;
    vector<int> qNum;
    int freq[3001] {0};
    cin >> s;
    
    while(s != "#"){
        cin >> q >> p;
        qNum.push_back(q);
        freq[q] = p;
        cin >> s;
    }
    sort(qNum.begin(), qNum.end());

    int k; cin >> k;
    int i = 1;
    while(true){
        for (int j = 0; j < qNum.size(); j++){
            if(i % freq[qNum[j]] == 0 && k){
                cout << qNum[j] << endl;
                k--;
            }
        }
        if(!k) break;  
        i++;      
    }

    terminate; 
}
