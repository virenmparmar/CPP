//A program to demonstrate the use of switch statement

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    switch (num) {
    case 1:
        cout << "Number is one" << endl;
        break;
    case 2:
        cout << "Number is Two" << endl;
        break;
    case 3:
    case 4:
        cout << "Number is Three or Four" << endl;
        break;
    default:
        cout << "Number is greater than 4" << endl;
    }
    return 0;
}