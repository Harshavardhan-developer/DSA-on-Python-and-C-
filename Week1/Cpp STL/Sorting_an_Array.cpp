#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {13, 5, 17, 9, 70, 43, 15};
    int n = 7;

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

/*
Output:

5 9 13 15 17 43 70
*/