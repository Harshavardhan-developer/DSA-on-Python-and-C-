#include <bits/stdc++.h>
using namespace std;

// Definition:
// Max Heap Priority Queue keeps the LARGEST element at the top.
//
// Rules:
// 1. Largest element has the highest priority.
// 2. top() gives the largest element.
// 3. push() adds an element.
// 4. pop() removes the largest element.
// 5. Duplicate elements are allowed.
// 6. push() and pop() take O(log n).
// 7. top() takes O(1).

int main() {

    priority_queue<int> pq; // {}

    pq.push(10); // {10}

    pq.push(50); // {50, 10}

    pq.push(30); // {50, 10, 30}

    pq.emplace(20); // {50, 20, 30, 10}

    pq.push(40); // {50, 40, 30, 10, 20}

    cout << "Top: " << pq.top() << endl; // 50

    pq.pop(); // Removes 50

    cout << "Top after pop: " << pq.top() << endl; // 40

    cout << "Size: " << pq.size() << endl; // 4

    cout << "Empty: " << pq.empty() << endl; // 0

    return 0;
}

/*
Output:

Top: 50
Top after pop: 40
Size: 4
Empty: 0
*/

// push()
// emplace()

// pop()
// top()

// size()
// empty()

// swap()