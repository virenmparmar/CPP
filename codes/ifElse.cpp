//A program to demonstrate if-else statements
#include <iostream>
using namespace std;

int main() {
    int x =6;
    int y =2;

    if (x > y) {
        cout << "x is greater than y" << endl;
    } else if (x < y) {
        cout << "y is greater than x" << endl;
    } else {
        cout << "x and y are equal" << endl;
    }
    return 0;
}