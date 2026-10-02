#include <bits/stdc++.h>
using namespace std;

// Definition:
// queue = FIFO (First In, First Out).
//
// Rules:
// 1. First inserted element comes out first.
// 2. Insertion happens at the back.
// 3. Deletion happens from the front.
// 4. front() gives the first element.
// 5. back() gives the last element.

int main() {

    queue<int> queue_1;
    // {}

    queue_1.push(10);
    // {10}

    queue_1.push(20);
    // {10, 20}

    queue_1.emplace(30);
    // {10, 20, 30}

    queue_1.push(40);
    // {10, 20, 30, 40}

    cout << "Front: " << queue_1.front() << endl;
    // 10

    cout << "Back: " << queue_1.back() << endl;
    // 40

    queue_1.pop();
    // {20, 30, 40}

    cout << "Front after pop: "
         << queue_1.front() << endl;
    // 20

    cout << "Size: " << queue_1.size() << endl;
    // 3

    cout << "Empty: " << queue_1.empty() << endl;
    // 0

    return 0;
}

/*
Output:

Front: 10
Back: 40
Front after pop: 20
Size: 3
Empty: 0
*/