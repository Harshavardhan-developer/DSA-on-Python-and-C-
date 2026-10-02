#include <bits/stdc++.h>
using namespace std;

// Definition:
// Min Heap Priority Queue keeps the SMALLEST element at the top.
//
// Rules:
// 1. Smallest element has the highest priority.
// 2. top() gives the smallest element.
// 3. push() adds an element.
// 4. pop() removes the smallest element.
// 5. Duplicate elements are allowed.
// 6. push() and pop() take O(log n).
// 7. top() takes O(1).

int main() {

    priority_queue<int, vector<int>, greater<int>> pq; // {}

    pq.push(10); // {10}

    pq.push(50); // {10, 50}

    pq.push(30); // {10, 50, 30}

    pq.emplace(20); // {10, 20, 30, 50}

    pq.push(5); // {5, 10, 20, 50, 30}

    cout << "Top: " << pq.top() << endl; // 5

    pq.pop(); // Removes 5

    cout << "Top after pop: " << pq.top() << endl; // 10

    cout << "Size: " << pq.size() << endl; // 4

    cout << "Empty: " << pq.empty() << endl; // 0

    return 0;
}

/*
Output:

Top: 5
Top after pop: 10
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