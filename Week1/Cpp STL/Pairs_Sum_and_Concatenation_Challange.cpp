#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void operate(vector<pair<int, string>> &pairs) {
        // Write your code here...
        int sum = 0;
        string str = "";

        for (auto [num, text] : pairs){
            sum += num;
            str += text;
        }

        cout << sum << endl;
        cout << str << endl;
        cout << str.size();
    }
};

/*
Example 1:
Input:
3
10 hello
20 world
30 welcome

Output:
60
helloworldwelcome
17


Example 2:
Input:
4
5 C++
10 Python
15 Java
20 SQL

Output:
50
C++PythonJavaSQL
16
*/