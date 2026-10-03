#include <bits/stdc++.h>
using namespace std;

int main() {

    // ==================== MAP ====================

    map<int, string> m;

    m[1] = "Apple";                 // {1, Apple}
    m[2] = "Banana";                // {1, Apple}, {2, Banana}
    m.insert({3, "Mango"});         // {1, Apple}, {2, Banana}, {3, Mango}
    m.emplace(4, "Orange");         // {1, Apple}, {2, Banana}, {3, Mango}, {4, Orange}

    cout << "Map:" << endl;

    for (auto &kv : m) {
        cout << kv.first << " " << kv.second << endl;
    }

    auto map_it = m.find(2);

    if (map_it != m.end()) {
        cout << "Map find: " << (*map_it).second << endl;
    }


    // ==================== MULTIMAP ====================

    multimap<int, string> mm;

    mm.insert({1, "Apple"});        // {1, Apple}
    mm.insert({2, "Banana"});       // {1, Apple}, {2, Banana}
    mm.insert({2, "Mango"});        // {1, Apple}, {2, Banana}, {2, Mango}
    mm.emplace(3, "Orange");        // {1, Apple}, {2, Banana}, {2, Mango}, {3, Orange}

    cout << "\nMultimap:" << endl;

    for (auto &kv : mm) {
        cout << kv.first << " " << kv.second << endl;
    }

    auto range = mm.equal_range(2);

    cout << "Values with key 2:" << endl;

    for (auto it = range.first; it != range.second; ++it) {
        cout << (*it).second << endl;
    }


    // ==================== UNORDERED MAP ====================

    unordered_map<char, string> um;

    um['a'] = "Apple";              // {a, Apple}
    um.insert({'b', "Banana"});      // adds b
    um.emplace('c', "Mango");        // adds c

    cout << "\nUnordered Map:" << endl;

    for (auto &kv : um) {
        cout << kv.first << " " << kv.second << endl;
    }

    auto um_it = um.find('b');

    if (um_it != um.end()) {
        cout << "Unordered Map find: " << (*um_it).second << endl;
    }


    // ==================== SORT ====================

    int a[] = {13, 5, 17, 9, 70, 43, 15};
    int n = sizeof(a) / sizeof(a[0]);

    sort(a, a + n);

    cout << "\nSorted Array:" << endl;

    for (int x : a) {
        cout << x << " ";
    }

    cout << endl;


    // ==================== DESCENDING SORT ====================

    sort(a, a + n, greater<int>());

    cout << "Descending Array:" << endl;

    for (int x : a) {
        cout << x << " ";
    }

    cout << endl;


    // ==================== CUSTOM COMPARATOR ====================

    vector<pair<int, int>> v = {
        {2, 5},
        {1, 8},
        {2, 3},
        {1, 4}
    };

    sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y) {

        if (x.first != y.first) {
            return x.first < y.first;
        }

        return x.second > y.second;
    });

    cout << "\nCustom Comparator:" << endl;

    for (auto p : v) {
        cout << p.first << " " << p.second << endl;
    }


    // ==================== POPCOUNT ====================

    int num = 29;

    cout << "\nPopcount of 29: "
         << __builtin_popcount(num) << endl;


    // ==================== NEXT PERMUTATION ====================

    vector<int> p = {1, 2, 3};

    cout << "\nNext Permutation:" << endl;

    next_permutation(p.begin(), p.end());

    for (int x : p) {
        cout << x << " ";
    }

    cout << endl;


    // ==================== MAX ELEMENT ====================

    vector<int> nums = {10, 25, 7, 40, 15};

    auto max_it = max_element(nums.begin(), nums.end());

    cout << "\nMaximum Element: "
         << *max_it << endl;


    return 0;
}

/*
========================================================

File name:
STL_Part_3.cpp

========================================================

OUTPUT:

Map:
1 Apple
2 Banana
3 Mango
4 Orange
Map find: Banana

Multimap:
1 Apple
2 Banana
2 Mango
3 Orange
Values with key 2:
Banana
Mango

Unordered Map:
a Apple
b Banana
c Mango
Unordered Map find: Banana

Sorted Array:
5 9 13 15 17 43 70

Descending Array:
70 43 17 15 13 9 5

Custom Comparator:
1 8
1 4
2 5
2 3

Popcount of 29:
4

Next Permutation:
1 3 2

Maximum Element:
40

========================================================

IMPORTANT:

map
    Unique keys + sorted
    map<int, string> m;

multimap
    Duplicate keys + sorted
    multimap<int, string> mm;

unordered_map
    Unique keys + unordered
    unordered_map<int, string> um;

sort()
    sort(a, a + n);

Descending:
    sort(a, a + n, greater<int>());

Custom comparator:
    sort(v.begin(), v.end(), comparator);

Popcount:
    __builtin_popcount(n);

Next permutation:
    next_permutation(v.begin(), v.end());

Maximum:
    *max_element(v.begin(), v.end());

========================================================
*/