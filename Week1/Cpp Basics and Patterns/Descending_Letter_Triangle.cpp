#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printDescendingLetterTriangle(int n) {
        //Write your code here...
        for (int i = n; i >= 1; i--) {
            for (int j = 0; j < i; j++) {
                cout << char(65 + j) << " ";
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
A B C D E
A B C D
A B C
A B
A


Example 2:

Input:
n = 3

Output:
A B C
A B
A
*/