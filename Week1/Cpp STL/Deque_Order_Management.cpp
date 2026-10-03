#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    
    void addOrderToFront(deque<int>& orders, int orderId) {
        // Write your code here...
        orders.push_front(orderId);
    }
    
    void addOrderToBack(deque<int>& orders, int orderId) {
        // Write your code here...
        orders.push_back(orderId);
    }
    
    void removeOrderFromFront(deque<int>& orders) {
        // Write your code here...
        if (!orders.empty()) {
            orders.pop_front();
        }
    }
    
    void removeOrderFromBack(deque<int>& orders) {
        // Write your code here...
        if (!orders.empty()) {
            orders.pop_back();
        }
    }
    
    void displayOrders(deque<int>& orders) {
        // Write your code here...
        for (int orderId : orders) {
            cout << orderId << " ";
        }
        cout << endl;
    }
};

/*
Example:

deque = {}

addOrderToFront(101)
deque = {101}

addOrderToBack(102)
deque = {101, 102}

addOrderToFront(100)
deque = {100, 101, 102}

addOrderToBack(103)
deque = {100, 101, 102, 103}

displayOrders(orders)
Output:
100 101 102 103

removeOrderFromFront()
deque = {101, 102, 103}

removeOrderFromBack()
deque = {101, 102}

displayOrders(orders)
Output:
101 102
*/