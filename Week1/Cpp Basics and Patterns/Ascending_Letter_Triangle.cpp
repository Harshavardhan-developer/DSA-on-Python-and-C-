#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscLetterTriangle(int n) {
        //Write your code here...
        for (int i = 0; i < n; i++) {
            char letter = char(65 + i);

            for (int j = 0; j <= i; j++) {
                cout << letter << " ";
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
B B
C C C
D D D D
E E E E E


Example 2:

Input:
n = 3

Output:
A
B B
C C C
*/