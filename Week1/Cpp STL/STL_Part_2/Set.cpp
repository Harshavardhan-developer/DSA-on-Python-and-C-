#include <bits/stdc++.h>
using namespace std;

// Definition:
// set = collection of UNIQUE elements in SORTED order.
//
// Rules:
// 1. Duplicate elements are not stored.
// 2. Elements are automatically sorted.
// 3. Search is possible using find().
// 4. Elements can be removed using erase().

int main() {

    set<int> set_1;
    // {}

    set_1.insert(5);
    // {5}

    set_1.insert(2);
    // {2, 5}

    set_1.insert(8);
    // {2, 5, 8}

    set_1.insert(2);
    // {2, 5, 8}
    // Duplicate ignored.

    set_1.insert(10);
    // {2, 5, 8, 10}

    cout << "Set: ";

    for (int x : set_1) {
        cout << x << " ";
    }

    cout << endl;

    auto it = set_1.find(5);

    if (it != set_1.end()) {
        cout << "Found: " << *it << endl;
    }

    cout << "Count of 5: "
         << set_1.count(5) << endl;
    // 1

    cout << "Count of 7: "
         << set_1.count(7) << endl;
    // 0

    set_1.erase(5);
    // {2, 8, 10}

    cout << "After erase: ";

    for (int x : set_1) {
        cout << x << " ";
    }

    cout << endl;

    cout << "Size: " << set_1.size() << endl;
    // 3

    cout << "Empty: " << set_1.empty() << endl;
    // 0

    return 0;
}

/*
Output:

Set: 2 5 8 10
Found: 5
Count of 5: 1
Count of 7: 0
After erase: 2 8 10
Size: 3
Empty: 0
*/