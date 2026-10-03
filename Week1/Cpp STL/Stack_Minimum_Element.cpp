#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    void push(stack<int>& s, int x) {
        s.push(x);
    }

    int pop(stack<int>& s) {
        if (s.empty()) {
            return -1;
        }

        int value = s.top();
        s.pop();

        return value;
    }

    bool isEmpty(stack<int>& s) {
        if (s.empty()) {
            return true;
        }

        return false;
    }

    int getMin(stack<int>& s) {
        if (s.empty()) {
            return -1;
        }

        stack<int> temp = s;
        int minimum = temp.top();

        while (!temp.empty()) {
            minimum = min(minimum, temp.top());
            temp.pop();
        }

        return minimum;
    }
};

/*
Example:

Stack:
push(10)
push(5)
push(20)
push(3)

Stack = {10, 5, 20, 3}

getMin()
Output: 3

pop()
Output: 3

Stack = {10, 5, 20}

getMin()
Output: 5

isEmpty()
Output: false

After removing all elements:

Stack = {}

isEmpty()
Output: true

If pop() is called on an empty stack:
Output: -1

If getMin() is called on an empty stack:
Output: -1
*/