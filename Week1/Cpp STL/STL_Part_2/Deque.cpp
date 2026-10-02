#include <bits/stdc++.h>
using namespace std;

// Definition:
// deque = Double Ended Queue.
// Insertion and deletion are possible from both ends.
//
// Rules:
// 1. Allows duplicate elements.
// 2. Maintains element order.
// 3. Supports random access.
// 4. Front and back operations are efficient.

int main() {

    deque<int> deque_1;
    // {}

    deque_1.push_back(5);
    // {5}

    deque_1.emplace_back(7);
    // {5, 7}

    deque_1.push_front(3);
    // {3, 5, 7}

    deque_1.emplace_front(1);
    // {1, 3, 5, 7}

    deque_1.pop_back();
    // {1, 3, 5}

    deque_1.pop_front();
    // {3, 5}

    cout << "Front: " << deque_1.front() << endl;
    // 3

    cout << "Back: " << deque_1.back() << endl;
    // 5

    cout << "Index 0: " << deque_1[0] << endl;
    // 3

    cout << "Index 1: " << deque_1.at(1) << endl;
    // 5

    deque_1.insert(deque_1.begin() + 1, 4);
    // {3, 4, 5}

    deque_1.erase(deque_1.begin() + 1);
    // {3, 5}

    cout << "Size: " << deque_1.size() << endl;
    // 2

    cout << "Empty: " << deque_1.empty() << endl;
    // 0

    deque_1.clear();
    // {}

    return 0;
}

/*
Output:

Front: 3
Back: 5
Index 0: 3
Index 1: 5
Size: 2
Empty: 0
*/