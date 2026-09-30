#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countVowels(string str) {
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U') {
                count++;
            }
        }

        return count;
    }
};

/*
Example 1:

Input:
str = "Hello World"

Output:
3

Explanation:
The vowels are:
e, o, o

Total number of vowels = 3


Example 2:

Input:
str = "Programming"

Output:
3

Explanation:
The vowels are:
o, a, i

Total number of vowels = 3
*/