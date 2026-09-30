#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printConcentricSquarePattern(int n) {
        int size = 2 * n - 1;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int value = max(abs(n - 1 - i), abs(n - 1 - j)) + 1;
                cout << value;

                if (j < size - 1) {
                    cout << " ";
                }
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
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3


Example 2:

Input:
n = 2

Output:
2 2 2
2 1 2
2 2 2
*/