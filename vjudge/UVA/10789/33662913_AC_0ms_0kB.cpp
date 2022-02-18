/*problem link: */

#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t;while (t--)
#define terminate return 0

void IO(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifdef ZAHER
    freopen ("../in.txt", "r", stdin);
    freopen ("../out.txt", "w", stdout);
#endif
}
vector<bool> primes(2010, true);

void sieve () {
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= 2010; ++i) {
        if (primes[i]) {
            for (int j = i + i; j < 2010; j += i) {
                primes[j] = false;
            }
        }
    }
}


int main () {
    IO();
    sieve();
    int cnt = 1;
    tc {
        string s; cin >> s;
        map<char, int> freq;
        vector<int> ans;
        for (char & item : s) {
            freq[item]++;
        }
        cout << "Case " << cnt << ": ";
        int flag = 0;
        for (auto item : freq) {
            if (primes[item.second]) {
                cout << item.first;
                flag = 1;
            }
        }
        if (!flag) cout << "empty" << endl;
        else cout << endl;
        cnt++;
    }

    terminate;
}

