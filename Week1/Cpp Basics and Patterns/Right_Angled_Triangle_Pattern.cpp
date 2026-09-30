#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printRightAngledTrianglePattern(int n) {
        //Write your code here...
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                cout << "* ";
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
*
* *
* * *
* * * *
* * * * *


Example 2:

Input:
n = 3

Output:
*
* *
* * *
*/