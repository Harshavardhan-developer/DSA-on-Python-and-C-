#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAsteriskSquare(int n) {
        // Write your code here...
        for (int i = 1; i <= n; i++) {
            if (i == 1 || i == n) {
                for (int j = 1; j <= n; j++) {
                    cout << "* ";
                }
            } else {
                cout << "* ";
                
                for (int j = 1; j <= n - 2; j++) {
                    cout << "  ";
                }
                
                cout << "*";
            }
            
            cout << endl;
        }
    }
};

/*
Example 1:

Input:
n = 5

Output:
* * * * *
*       *
*       *
*       *
* * * * *


Example 2:

Input:
n = 3

Output:
* * *
*   *
* * *
*/