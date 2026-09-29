#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int arraySum(int arr[], int n) {
        // Write your code here...
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        return sum;
    }
};

/*
Example 1:

Input:
N = 5
arr[] = {2, 4, 6, 8, 10}

Output:
30

Explanation:
Sum of all elements in the array arr = 2 + 4 + 6 + 8 + 10 = 30


Example 2:

Input:
N = 5
arr[] = {-6, 1, 3, 7, 5}

Output:
10

Explanation:
Sum of all elements in the array arr = -6 + 1 + 3 + 7 + 5 = 10
*/