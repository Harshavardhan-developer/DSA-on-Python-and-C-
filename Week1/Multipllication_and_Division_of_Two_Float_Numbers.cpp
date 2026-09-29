#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write Your Code here...
    float a;
    float b;
    cin >> a >> b;

    cout << fixed << setprecision(2);
    cout << a * b << endl;
    
    if (b == 0) {
        cout << "Undefined";
    } else {
        cout << a / b;
    }

    return 0;
}

/*
Input:
3.5 2

Output:
7.00
1.75

Input:
3.5 0

Output:
0.00
Undefined
*/