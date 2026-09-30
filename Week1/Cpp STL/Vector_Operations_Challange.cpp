#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    // ADD
    void insertElement(vector<int> &arr, int x) {
        arr.push_back(x);
    }

    // DELETE
    void deleteElement(vector<int> &arr, int x) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                arr.erase(arr.begin() + i);
                break;
            }
        }
    }

    // REVERSE
    void reverseArray(vector<int> &arr) {
        reverse(arr.begin(), arr.end());
    }

    // SIZE
    void sizeOfArray(vector<int> &arr) {
        cout << arr.size() << endl;
    }

    // PRINT
    void displayArray(vector<int> &arr) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


/*
Example 1:

Input:
8
insert 1
insert 2
insert 3
print
reverse
print
delete 2
size

Output:
1 2 3
3 2 1
2


Example 2:

Input:
6
insert 10
insert 20
delete 10
print
delete 20
print

Output:
20

*/