#include<bits/stdc++.h>
using namespace std;

class solution {
  public:
    void insert(set<int> &s,int x)
    {
        // Write your code here...
        s.insert(x);
    }

    void print_contents(set<int> &s)
    {
        // Write your code here...
        for (int x : s){
            cout << x << " ";
        }
        
    }

    void erase(set<int> &s,int x)
    {
        // Write your code here...
        s.erase(x);
    }

    int find(set<int> &s,int x)
    {
        // Write your code here...
        if (s.find(x) != s.end()) {
            return 1;
        }

        return -1;
    }

    int size(set<int> &s)
    {
        // Write your code here...
        return s.size();
    }
};

/*
Example:

set = {}

insert(10)
set = {10}

insert(5)
set = {5, 10}

insert(20)
set = {5, 10, 20}

insert(5)
set = {5, 10, 20}
Duplicate ignored.

print_contents(s)
Output:
5 10 20

find(s, 10)
Output:
1

find(s, 15)
Output:
-1

erase(s, 10)
set = {5, 20}

size(s)
Output:
2
*/