#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscLetterPyramid(int n) {
        //Write your code here...
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
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
E
D E
C D E
B C D E
A B C D E


Example 2:

Input:
n = 3

Output:
C
B C
A B C
*/