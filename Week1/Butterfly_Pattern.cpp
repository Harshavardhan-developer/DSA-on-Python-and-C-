#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printButterflyPattern(int n) {
        // Upper half
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }

            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << "  ";
            }

            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }

            cout << endl;
        }

        // Lower half
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }

            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << "  ";
            }

            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }

            cout << endl;
        }
    }
};

/*
Example 1:

Input:
n = 4

Output:
*       *
* *     * *
* * *   * * *
* * * * * * * *
* * *   * * *
* *     * *
*       *


Example 2:

Input:
n = 3

Output:
*     *
* *   * *
* * * * * *
* *   * *
*     *
*/