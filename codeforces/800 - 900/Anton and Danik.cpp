/*https://codeforces.com/contest/734/problem/A*/

#include <bits/stdc++.h>
  
using namespace std; 
  
int main() 
{
    int numOfGames = 0;
    int anton = 0;
    int danik = 0;

    cin >> numOfGames;
    
    char gamesResult[numOfGames];
    for(int i = 0; i < numOfGames; ++i){
        cin >> gamesResult[i];
    }

    for(int i = 0; i < numOfGames; ++i){
        if(gamesResult[i] == 'D'){
            danik++;
        }
        else if(gamesResult[i] == 'A'){
            anton++;
        }
    }

    if(danik > anton){
        cout << "Danik";
    }
    else if(anton > danik){
        cout << "Anton";
    }
    else{
        cout << "Friendship";
    }

    return 0; 
} 