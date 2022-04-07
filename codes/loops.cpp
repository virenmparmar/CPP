//A program to demonstrate different types of loops in C++
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }
    cout << "Done with while loop" << endl;
    i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i < 10);
    cout << "Done with do while loop" << endl;
    i = 0;
    for (i = 0; i < 10; i++) {
        cout << i << endl;
    }
    cout << "Done with for loop" << endl;
    return 0;
}