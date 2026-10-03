#include<bits/stdc++.h>
using namespace std;

class solution{
    public:

    void addPatient(priority_queue<pair<int, string>>& patients, int severity, string name) {
        patients.push({severity, name});
    }

    void treatPatient(priority_queue<pair<int, string>>& patients) {
        if (!patients.empty()) {
            string name = patients.top().second;
            patients.pop();

            cout << name << endl;
        }
    }

    void displayNextPatient(priority_queue<pair<int, string>>& patients) {
        if (!patients.empty()) {
            cout << patients.top().second << endl;
        }
    }
};

/*
Example:

addPatient(5, "John")
Priority Queue:
{5, John}

addPatient(8, "Alice")
Priority Queue:
{8, Alice}, {5, John}

addPatient(3, "Bob")
Priority Queue:
{8, Alice}, {5, John}, {3, Bob}

displayNextPatient()
Output:
Alice

treatPatient()
Output:
Alice

Remaining:
{5, John}, {3, Bob}

displayNextPatient()
Output:
John
*/