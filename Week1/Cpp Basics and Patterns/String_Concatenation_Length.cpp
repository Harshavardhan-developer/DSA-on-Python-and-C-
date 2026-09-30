#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int lengthAfterConcat(int n, string arr[]) {
        // Write your code here...
        int length_sum = 0;

        for (int i = 0; i < n; i++) {
            length_sum += arr[i].length();
        }


        return length_sum;
    }
};

/*
Example 1:

Input:
n = 2
arr[] = {"hello", "world"}

Output:
10

Explanation:
Length of "hello" = 5
Length of "world" = 5

Total length = 5 + 5 = 10


Example 2:

Input:
n = 3
arr[] = {"abc", "de", "hello"}

Output:
10

Explanation:
Length of "abc" = 3
Length of "de" = 2
Length of "hello" = 5

Total length = 3 + 2 + 5 = 10
*/