/*https://codeforces.com/contest/677/problem/A*/

#include <iostream> 
  
using namespace std; 
  
int main() 
{
    int numOfPerson = 0;
    int minimumHeight = 0;
    int numOfRows = 0;

    std::cin >> numOfPerson;
    std::cin >> minimumHeight;

    int personsHeight[numOfPerson];
    for(int i = 0; i < numOfPerson; ++i){
        std::cin >> personsHeight[i];
    }

    for(int i = 0; i < numOfPerson; ++i){
        if(personsHeight[i] > minimumHeight){
            personsHeight[i] -= minimumHeight;
            i--;
        }
        numOfRows++;
    }

    std::cout << numOfRows;
    return 0; 
} 