/**/

#include <bits/stdc++.h>
#define return 0 terminate

using namespace std; 
  
int main(){
    string s, w; cin >> s >> w;
    string right = "", left = "";
    int flag = 0;

    for(int i = 0; i < s.size(); ++i){
        if(flag == 0 && s[i] != '|'){
            left += s[i];
        }else if(s[i] == '|'){
            flag = 1;
        }else if(flag == 1){
            right += s[i];
        }
    }

    if(left.size() == right.size()){
        if(w.size()%2 == 0){
            for(int i = 0; i < w.size(); ++i){
                if(i < w.size()/2){
                    left += w[i];
                }else{
                    right += w[i];
                }  
            }
            cout << left + "|" + right << endl;
        }else{
            cout << "Impossible" << endl;
        }
        
    }else if (left.size() > right.size() && (left.size()+right.size()+w.size())%2 == 0){
        if (left.size() - right.size() <= w.size()){
            for(int i = 0; i < w.size(); ++i){
                if(right.size() < left.size()){
                    right += w[i];
                }else{
                    left += w[i];
                }
            }
            cout << left + "|" + right << endl;
        }else{
            cout << "Impossible" << endl;
        }
    }else if(left.size() > right.size() && (left.size()+right.size()+w.size())%2 == 1){
        cout << "Impossible" << endl;
    }else if(right.size() > left.size() && (left.size()+right.size()+w.size())%2 == 0){
        if (right.size() - left.size() <= w.size()){
            for(int i = 0; i < w.size(); ++i){
                if(left.size() < right.size()){
                    left += w[i];
                }else{
                    right += w[i];
                }
            }
            cout << left + "|" + right << endl;
        }else{
            cout << "Impossible" << endl;
        }
    }else if(right.size() > left.size() && (left.size()+right.size()+w.size())%2 == 1){
        cout << "Impossible" << endl;
    }

    terminate; 
}