//A program to demonstrate pass by value and pass by reference in C++
#include <iostream>
using namespace std;

//Pass by value function
void incrementbyvalue(int num) {
    num++;
    cout << "In increment function: " << num << endl;
}

//Pass by reference function
void incrementbyreference(int &num) {
    num++;
    cout << "In increment function: " << num << endl;
}

int main() {
    int q = 10;
    incrementbyvalue(q);
    cout << "In Main: " << q << endl;
    incrementbyreference(q);
    cout << "In Main: " << q << endl;
    return 0;
}