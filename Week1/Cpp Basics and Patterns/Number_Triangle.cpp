#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printTriangle(int n) {
        // Write your code here...
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                cout << to_string(j) << " ";
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
1 2
1 2 3
1 2 3 4
1 2 3 4 5


Example 2:

Input:
n = 3

Output:
1
1 2
1 2 3
*/