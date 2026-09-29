#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void manipulateArray(int arr[], int n, int k) {
        // Write your code here...
        int middle = 0;

        if (n % 2 == 0) {
            middle = (n / 2) - 1;
        } else {
            middle = n / 2;
        }

        arr[middle] = arr[middle] * k;


        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
};

/*
Example 1:

Input:
arr[] = {2, 4, 6, 8, 10}
n = 5
k = 3

Output:
2 4 18 8 10

Explanation:
n = 5, so the middle index is 5 / 2 = 2.
The middle element is arr[2] = 6.
6 * 3 = 18.
Therefore, the modified array is:
2 4 18 8 10


Example 2:

Input:
arr[] = {2, 4, 6, 8}
n = 4
k = 3

Output:
2 12 6 8

Explanation:
n = 4, so the left middle index is (4 / 2) - 1 = 1.
The middle element is arr[1] = 4.
4 * 3 = 12.
Therefore, the modified array is:
2 12 6 8
*/