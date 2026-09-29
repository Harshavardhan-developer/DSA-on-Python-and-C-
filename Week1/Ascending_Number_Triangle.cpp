#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscendingNumberTriangle(int n) {
        // Write your code here...
        int num = 1;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << num << " ";
                num++;
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
2 3
4 5 6
7 8 9 10
11 12 13 14 15


Example 2:

Input:
n = 3

Output:
1
2 3
4 5 6
*/