/**/

#include <bits/stdc++.h>
#define terminate return 0
#define space ' '
#define ll long long

using namespace std; 
  
int main(){
    ofstream out("out.txt");
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    while(i < j){
        cout << arr[i] << space << arr[j] << space;
        i++; j--;
    }
    if(i == j) cout << arr[i];
    cout << endl;
    terminate; 
}
