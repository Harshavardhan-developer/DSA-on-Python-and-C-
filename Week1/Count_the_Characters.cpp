#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countChar(string str, char ch) {
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ch) {
                count++;
            }
        }

        return count;
    }
};

/*
Example 1:

Input:
str = "hello"
ch = 'l'

Output:
2

Explanation:
The character 'l' appears 2 times in "hello".


Example 2:

Input:
str = "programming"
ch = 'm'

Output:
2

Explanation:
The character 'm' appears 2 times in "programming".
*/