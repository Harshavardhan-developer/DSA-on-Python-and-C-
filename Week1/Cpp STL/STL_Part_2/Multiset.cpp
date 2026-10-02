#include <bits/stdc++.h>
using namespace std;

// Definition:
// multiset = collection of elements in SORTED order
// where DUPLICATES are allowed.
//
// Rules:
// 1. Duplicate elements are allowed.
// 2. Elements are automatically sorted.
// 3. erase(value) removes all matching values.
// 4. erase(iterator) removes one matching element.

int main() {

    multiset<int> ms; // {}

    ms.insert(5); // {5}

    ms.insert(2); // {2, 5}

    ms.insert(5); // {2, 5, 5}

    ms.insert(8); // {2, 5, 5, 8}

    ms.insert(2); // {2, 2, 5, 5, 8}

    cout << "Multiset: ";

    for (int x : ms) {
        cout << x << " ";
    }

    cout << endl;

    cout << "Count of 5: " << ms.count(5) << endl; // 2

    auto it = ms.find(5);

    if (it != ms.end()) {
        cout << "Found: " << *it << endl; // 5
    }

    ms.erase(5); // {2, 2, 8}

    cout << "After erase(5): ";

    for (int x : ms) {
        cout << x << " ";
    }

    cout << endl;

    ms.insert(2); // {2, 2, 2, 8}

    auto it2 = ms.find(2);

    if (it2 != ms.end()) {
        ms.erase(it2); // {2, 2, 8}
    }

    cout << "After removing one 2: ";

    for (int x : ms) {
        cout << x << " ";
    }

    cout << endl;

    cout << "Size: " << ms.size() << endl; // 3

    cout << "Empty: " << ms.empty() << endl; // 0

    return 0;
}

/*
Output:

Multiset: 2 2 5 5 8
Count of 5: 2
Found: 5
After erase(5): 2 2 8
After removing one 2: 2 2 8
Size: 3
Empty: 0
*/

// insert()
// emplace()

// find()
// count()

// erase(value)
// erase(iterator)

// begin()
// end()
// rbegin()
// rend()

// lower_bound()
// upper_bound()

// size()
// empty()
// clear()