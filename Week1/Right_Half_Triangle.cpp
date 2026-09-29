#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printPattern(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
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
*
**
***
****
*****

Explanation:
The pattern contains 5 rows.
Each row prints one more '*' than the previous row.


Example 2:

Input:
n = 3

Output:
*
**
***

Explanation:
The pattern contains 3 rows.
Each row prints one more '*' than the previous row.
*/