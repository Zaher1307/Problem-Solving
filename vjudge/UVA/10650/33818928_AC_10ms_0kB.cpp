/*problem link: */

#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

#define space ' '
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define tc int t; cin >> t;while (t--)
#define terminate return 0

/**************************************************************************************************/
/**/std::chrono::system_clock::time_point start;                                                /**/
/**/void end () {                                                                               /**/
#ifdef ZAHER                                                                                    /**/
/**/    auto stop = high_resolution_clock::now();                                               /**/
/**/    auto duration = duration_cast<microseconds>(stop - start);                              /**/
/**/    cout << duration.count() * 1e-6 << " second" << endl;                                   /**/
#endif
/**/}                                                                                           /**/
/**/void IO () {                                                                                /**/
/**/    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);        /**/
#ifdef ZAHER                                                                                    /**/
/**/    freopen ("../in.txt", "r", stdin);                                        /**/
/**/    freopen ("../out.txt", "w", stdout);                                      /**/
/**/    start = high_resolution_clock::now();                                                   /**/
#endif
/**/}                                                                                           /**/
/**********************************************solution********************************************/
vector<bool> prime(32005, true);
vector<int> primes;
vector<int> com(32009, 0);

void sieve () {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 32005; ++i) {
        if (prime[i]) {
           for (int j = i + i; j <= 32005; j += i) {
               prime[j] = false;
           }
        }
    }
}

void collect () {
    for (int i = 0; i < 32005; ++i) {
        if (prime[i]) {
            primes.push_back(i);
            com[i + 1] = com[i] + 1;
        } else {
            com[i + 1] = com[i];
        }
    }
    sort(all(primes));
}


int main () {
    IO();
    sieve();
    collect();
    int a, b; cin >> a >> b;
    while (a || b) {
        int dummy = min(a, b);
        b = max(a, b);
        a = dummy;
        vector<vector<int>> ans;
        auto it = lower_bound(all(primes), a);
        while ((it + 1) != primes.end() && *(it + 1) <= b) {
            vector<int> temp;
            temp.push_back(*it);
            int dif = *(it + 1) - *it;
            while (*(it + 1) - *it == dif && (it + 1) != primes.end()) {
                temp.push_back(*(it + 1));
                it++;
            }
            sort(all(temp));
            ans.push_back(temp);
        }
        for (auto &item : ans) {
            if (item.size() > 2 && item[item.size() - 1] <= b && (com[item[0]] - com[item[0] - (item[1] - item[0])] != 1 || ((com[item[0]] - com[item[0] - (item[1] - item[0])] == 1) && !prime[item[0] - (item[1] - item[0])]))) {
                for (int i = 0; i < item.size() - 1; ++i) {
                    cout << item[i] << space;
                }
                cout << item[item.size() -  1] << endl;
            }
        }
        cin >> a >> b;
    }

    end();
    terminate;
}
