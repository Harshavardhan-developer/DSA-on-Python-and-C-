#include <bits/stdc++.h>
using namespace std; 

int main() {

int a = 105;
cin >> a;

if (a >= 100){
    cout << "Century";
}else if (a >= 50 and a < 100){
    cout << "Half Century";
}else{
    cout << "Not a Century";
}
    return 0;
}