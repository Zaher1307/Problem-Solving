/*https://codeforces.com/problemset/problem/812/A*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 

#define l 0
#define s 1
#define r 2
#define p 3
  
int main(){
    int vec1[4];
    int vec2[4];
    int vec3[4];
    int vec4[4];
    for(int i = 0; i < 4; ++i){
        cin >> vec1[i];
    } 
    for(int i = 0; i < 4; ++i){
        cin >> vec2[i];
    }
    for(int i = 0; i < 4; ++i){
        cin >> vec3[i];
    }
    for(int i = 0; i < 4; ++i){
        cin >> vec4[i];
    } 
    
    if(vec1[p] && (vec1[r] || vec1[s] || vec1[l] || vec2[l] || vec3[s] || vec4[r])){
        cout << "YES" << endl;
    }else if(vec2[p] && (vec2[r] || vec2[s] || vec2[l] || vec1[r] || vec3[l] || vec4[s])){
        cout << "YES" << endl;
    }else if(vec3[p] && (vec3[r] || vec3[s] || vec3[l] || vec1[s] || vec2[r] || vec4[l])){
        cout << "YES" << endl;
    }else if(vec4[p] && (vec4[r] || vec4[s] || vec4[l] || vec1[l] || vec2[s] || vec3[r])){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    terminate; 
}
