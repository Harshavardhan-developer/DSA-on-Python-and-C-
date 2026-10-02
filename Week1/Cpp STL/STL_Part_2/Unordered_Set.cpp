#include <bits/stdc++.h>
using namespace std;

// Definition:
// unordered_set = collection of UNIQUE elements
// without sorted order.
//
// Rules:
// 1. Duplicate elements are not stored.
// 2. Elements are not sorted.
// 3. Order is not guaranteed.
// 4. Average insertion is O(1).
// 5. Average search is O(1).
// 6. Average deletion is O(1).

int main() {

    unordered_set<int> us;
    // {}

    us.insert(5);
    // {5}

    us.insert(2);
    // {5, 2}

    us.insert(8);
    // {5, 2, 8}

    us.insert(2);
    // Duplicate ignored.

    us.insert(10);
    // {5, 2, 8, 10}

    cout << "Unordered Set: ";

    for (int x : us) {
        cout << x << " ";
    }

    cout << endl;

    auto it = us.find(5);

    if (it != us.end()) {
        cout << "Found: " << *it << endl;
    }

    cout << "Count of 5: "
         << us.count(5) << endl;
    // 1

    cout << "Count of 7: "
         << us.count(7) << endl;
    // 0

    us.erase(2);

    cout << "After erase(2): ";

    for (int x : us) {
        cout << x << " ";
    }

    cout << endl;

    cout << "Size: " << us.size() << endl;
    // 3

    cout << "Empty: " << us.empty() << endl;
    // 0

    return 0;
}

/*
Output order can be different because
unordered_set does NOT guarantee order.

Example:

Unordered Set: 10 8 2 5
Found: 5
Count of 5: 1
Count of 7: 0
After erase(2): 10 8 5
Size: 3
Empty: 0
*/