#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write Your Code here...

    int a;
    int b;
    char c;

    cin >> a >> b >> c;

    switch (c) {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;

        case '/':
            if (b == 0) {
                cout << "Undefined";
            } else {
                cout << a / b;
            }
            break;
    }

    return 0;
}

/*
Input:
10 5 +

Output:
15
*/