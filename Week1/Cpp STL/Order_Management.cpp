#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<pair<string, pair<int, double>>> orders;
    
    void addOrder(string itemName, int quantity, double price) {
        //Write your code here...
        orders.push_back({itemName, {quantity, price}});
        
    }
    
    void updateOrder(string itemName, int newQuantity, double newPrice) {
        //Write your code here...
        for (int i = 0; i < orders.size(); i++){
            if (orders[i].first == itemName){
                orders[i].second.first = newQuantity;
                orders[i].second.second = newPrice;
                break;
            }
        }
        
    }
    
    double calculateTotalRevenue() {
        //Write your code here...
        double total = 0;
        
        for (int i = 0; i < orders.size(); i++){
            total += orders[i].second.first * orders[i].second.second;
        }
        return total;
        
    }
};


/*
Example 1:

Input:
6
A Monitor 8 880.72
A Tablet 6 420.17
A Laptop 1 1998.18
U Monitor 6 671.32
U Tablet 2 1605.93
C

Expected Output:
9237.96


Example 2:

Input:
5
A Keyboard 2 750.50
A Mouse 3 450.25
U Keyboard 4 800.00
A Headphones 1 1500.00
C

Expected Output:
6050.75
*/