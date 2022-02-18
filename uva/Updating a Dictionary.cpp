/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3948*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std;

int main(){
    //ofstream out("out.txt");
    int n; cin >> n;
    while(n--){
        string oldDic; cin >> oldDic;
        string newDic; cin >> newDic;
        string key;
        string val;
        map<string, string> oldMap;
        map<string, string> newMap;
        bool flag = true;
        vector<string> add;
        vector<string> remove;
        vector<string> change;



        for(int i = 1; i < oldDic.size(); ++i){
            if(oldDic[i] != ':' && oldDic[i] != ',' && oldDic[i] != '}' && flag == true){
                key += oldDic[i];
            }else if(oldDic[i] != ':' && oldDic[i] != ',' && oldDic[i] != '}' && flag == false){
                val += oldDic[i];
            }else if(oldDic[i] == ':'){
                flag = false;
            }else if(oldDic[i] == ',' || oldDic[i] == '}' && oldDic.size()-2){
                oldMap.insert({key, val});
                flag = true;
                key = "";
                val = "";
            }
        }
        for(int i = 1; i < newDic.size(); ++i){
            if(newDic[i] != ':' && newDic[i] != ',' && newDic[i] != '}' && flag == true){
                key += newDic[i];
            }else if(newDic[i] != ':' && newDic[i] != ',' && newDic[i] != '}' && flag == false){
                val += newDic[i];
            }else if(newDic[i] == ':'){
                flag = false;
            }else if(newDic[i] == ',' || newDic[i] == '}' && newDic.size()-2){
                newMap.insert({key, val});
                flag = true;
                key = "";
                val = "";
            }
        }


        for(auto it: oldMap){
            auto checker = newMap.find(it.first);
            if(checker == newMap.end()){
                remove.push_back(it.first);
            }else{
                if(it.second != checker->second){
                    change.push_back(it.first);
                }
            }
        }
        for(auto it: newMap){
            auto checker = oldMap.find(it.first);
            if(checker == oldMap.end()){
                add.push_back(it.first);
            }
        }

        if(!(add.size() || remove.size() || change.size())){
            cout << "No changes" << endl;
        }else{
            if(add.size()){
                cout << "+";
                for(int i = 0; i < add.size(); ++i){
                    cout << add[i];
                    if(i != add.size() - 1){
                        cout << ",";
                    }
                }
                cout << endl;
            }
            if(remove.size()){
                cout << "-";
                for(int i = 0; i < remove.size(); ++i){
                    cout << remove[i];
                    if(i != remove.size() - 1){
                        cout << ",";
                    }
                }
                cout << endl;
            }
            if(change.size()){
                cout << "*";
                for(int i = 0; i < change.size(); ++i){
                    cout << change[i];
                    if(i != change.size() - 1){
                        cout << ",";
                    }
                }
                cout << endl;
            }
        }
        cout << endl;


    }
    terminate;
}
