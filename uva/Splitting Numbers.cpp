
/*https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3084*/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    int n, c = 0; 
    stack <int>  s0, s1, s2;
    string s, a, b; 
    cin >> n;
    while(n){
        int num1 = 0, num2 = 0;
        while(n!=0){
            s0.push((n % 2)+48);
            n /= 2;
            
        }
        while(s0.size()){
            s += s0.top();
            s0.pop();
        }
        
        for(int i = s.size()-1; i >= 0; --i){
            if(s[i] == '1' && c % 2 == 0){
                 s1.push(49);
                 s2.push(48);
                c++;
            }else if(s[i] == '1' && c % 2 != 0){
                 s2.push(49);
                 s1.push(48);
                c++;
            }else{
                 s1.push(48);
                 s2.push(48);
            }
        }
        
         while(s1.size()){
             a += s1.top();
             s1.pop();
         }
         while(s2.size()){
             b += s2.top();
             s2.pop();
        }


        for(int i = a.size()-1, j = 0; i >= 0; --i, ++j){
            num1 += (a[i] - 48) * pow(2, j);
        }
        for(int i = b.size()-1, j = 0; i >= 0; --i, ++j){
            num2 += (b[i] - 48) * pow(2, j);
        }

        cout << num1  << space << num2 << endl;

        s = "";
        a = "";
        b = "";
        c = 0;

        cin >> n;
    } 
    terminate; 
}