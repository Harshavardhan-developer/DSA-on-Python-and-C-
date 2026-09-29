#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    double calculateAverage(int arr[], int n) {
        //Write your code here...
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        return (double)sum / n;
    }
};

/*
Example 1:

Input:
n = 5
arr[] = {10, 20, 30, 40, 50}

Output:
30

Explanation:
Sum = 10 + 20 + 30 + 40 + 50 = 150
Average = 150 / 5 = 30


Example 2:

Input:
n = 4
arr[] = {5, 10, 15, 20}

Output:
12.5

Explanation:
Sum = 5 + 10 + 15 + 20 = 50
Average = 50 / 4 = 12.5
*/