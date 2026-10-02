#include <bits/stdc++.h>
using namespace std;

// Definition:
// stack = LIFO (Last In, First Out).
//
// Rules:
// 1. Last inserted element comes out first.
// 2. Insertion happens at the top.
// 3. Deletion happens from the top.
// 4. Only top element can be accessed.

int main() {

    stack<int> stack_1;
    // {}

    stack_1.push(10);
    // {10}

    stack_1.push(20);
    // {10, 20}

    stack_1.emplace(30);
    // {10, 20, 30}

    cout << "Top: " << stack_1.top() << endl;
    // 30

    stack_1.pop();
    // {10, 20}

    cout << "Top after pop: " << stack_1.top() << endl;
    // 20

    cout << "Size: " << stack_1.size() << endl;
    // 2

    cout << "Empty: " << stack_1.empty() << endl;
    // 0

    stack_1.pop();
    // {10}

    stack_1.pop();
    // {}

    cout << "Empty after removing all: "
         << stack_1.empty() << endl;
    // 1

    return 0;
}

/*
Output:

Top: 30
Top after pop: 20
Size: 2
Empty: 0
Empty after removing all: 1
*/