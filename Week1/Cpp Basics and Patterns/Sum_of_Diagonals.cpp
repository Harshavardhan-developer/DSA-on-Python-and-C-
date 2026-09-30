#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void sumOfDiagonals(int matrix[][1000], int n) {
        //Write your code here...
        int primary = 0;
        int secondary = 0;
        
        for(int i = 0; i < n; i++){
            primary += matrix[i][i];
            secondary += matrix[i][n - i - 1];
        }

        cout << primary << " " << secondary;
    }
};

/*
Example 1:

Input:
n = 3
matrix =
1 2 3
4 5 6
7 8 9

Output:
15 15

Explanation:
Primary diagonal = 1 + 5 + 9 = 15
Secondary diagonal = 3 + 5 + 7 = 15


Example 2:

Input:
n = 4
matrix =
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Output:
34 34

Explanation:
Primary diagonal = 1 + 6 + 11 + 16 = 34
Secondary diagonal = 4 + 7 + 10 + 13 = 34
*/