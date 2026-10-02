#include <bits/stdc++.h>
using namespace std;

// Definition:
// list = Doubly Linked List.
//
// Rules:
// 1. Allows duplicate elements.
// 2. Maintains element order.
// 3. Does not support random access.
// 4. Insertion and deletion are efficient with iterators.
// 5. Supports front and back operations.

int main() {

    list<int> list_1;
    // {}

    list_1.push_back(5);
    // {5}

    list_1.emplace_back(7);
    // {5, 7}

    list_1.push_front(3);
    // {3, 5, 7}

    list_1.emplace_front(1);
    // {1, 3, 5, 7}

    list_1.pop_back();
    // {1, 3, 5}

    list_1.pop_front();
    // {3, 5}

    cout << "Front: " << list_1.front() << endl;
    // 3

    cout << "Back: " << list_1.back() << endl;
    // 5

    list_1.push_back(10);
    // {3, 5, 10}

    list_1.push_front(1);
    // {1, 3, 5, 10}

    auto it = list_1.begin();
    ++it;

    list_1.insert(it, 2);
    // {1, 2, 3, 5, 10}

    auto erase_it = list_1.begin();
    ++erase_it;

    list_1.erase(erase_it);
    // {1, 3, 5, 10}

    cout << "Size: " << list_1.size() << endl;
    // 4

    cout << "Empty: " << list_1.empty() << endl;
    // 0

    list_1.reverse();
    // {10, 5, 3, 1}

    list_1.sort();
    // {1, 3, 5, 10}

    return 0;
}

/*
Output:

Front: 3
Back: 5
Size: 4
Empty: 0
*/   

// push_back()
// push_front()
// emplace_back()
// emplace_front()

// pop_back()
// pop_front()

// front()
// back()

// insert()
// erase()

// begin()
// end()
// rbegin()
// rend()

// sort()
// reverse()
// remove()
// clear()

// size()
// empty()