#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printInvertedCenteredStarTriangle(int n) {
        // Write your code here...
        for (int i = n; i >= 1; i--) {

            for (int j = 0; j < n - i; j++) {
                cout << " ";
            }

            for (int j = 0; j < 2 * i - 1; j++) {
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
*********
 *******
  *****
   ***
    *


Example 2:

Input:
n = 3

Output:
*****
 ***
  *
*/