#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printUppercaseLetterPyramid(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }

            for (int j = 0; j < i; j++) {
                cout << char(65 + j);
            }

            for (int j = i - 2; j >= 0; j--) {
                cout << char(65 + j);
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
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA


Example 2:

Input:
n = 3

Output:
  A
 ABA
ABCBA
*/