#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    void insert(queue<int>& q, int k) {
        q.push(k);
    }

    int findFrequency(queue<int>& q, int k) {
        int count = 0;

        queue<int> temp = q;

        while (!temp.empty()) {
            if (temp.front() == k) {
                count++;
            }

            temp.pop();
        }

        if (count == 0) {
            return -1;
        }

        return count;
    }
};

/*
Example:

Queue:
insert(10)
insert(20)
insert(10)
insert(30)
insert(10)

Queue = {10, 20, 10, 30, 10}

findFrequency(q, 10)
Output: 3

findFrequency(q, 20)
Output: 1

findFrequency(q, 30)
Output: 1

findFrequency(q, 50)
Output: -1
*/