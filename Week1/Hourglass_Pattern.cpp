#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printHourglassPattern(int n) {
        //Write your code here...

        // Upper half
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                cout << "* ";
            }

            for (int j = 0; j < 2 * i; j++) {
                cout << "  ";
            }

            for (int j = 0; j < n - i; j++) {
                cout << "* ";
            }

            cout << endl;
        }

        // Lower half
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < n - i; j++) {
                cout << "* ";
            }

            for (int j = 0; j < 2 * i; j++) {
                cout << "  ";
            }

            for (int j = 0; j < n - i; j++) {
                cout << "* ";
            }

            cout << endl;
        }
    }
};

/*
Example 1:

Input:
n = 3

Output:
* * * * * *
* *     * *
*         *
*         *
* *     * *
* * * * * *


Example 2:

Input:
n = 2

Output:
* * * *
*     *
*     *
* * * *
*/