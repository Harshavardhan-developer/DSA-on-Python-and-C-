#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void searchElement(int** arr, int n, int m, int k) {
        // Write your code here...

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == k) {
                    cout << i << " " << j;
                    return;
                }
            }
        }
        cout << "-1 -1";
    }
};

/*
Example 1:

Input:
n = 3
m = 3
array = [[1, 2, 3],
         [4, 5, 6],
         [7, 8, 9]]
k = 6

Output:
1 2

Explanation:
The integer 6 is found at row 1 and column 2 in the array.


Example 2:

Input:
n = 3
m = 2
array = [[16, 21],
         [34, 56],
         [70, 81]]
k = 73

Output:
-1 -1

Explanation:
The integer 73 is not present in the array.
*/