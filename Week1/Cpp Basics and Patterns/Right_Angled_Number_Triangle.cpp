#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printRightAngledNumberTriangle(int n) {
        // Write your code here...
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                cout << i << " ";
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
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5


Example 2:

Input:
n = 3

Output:
1
2 2
3 3 3
*/