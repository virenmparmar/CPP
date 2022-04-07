//A program to demonstrate use of functions in C++
#include <iostream>
using namespace std;

//Function to calculate power of a number
int raiseToPower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}


int main() {
    int theeExprFour = raiseToPower(3, 4);
    cout << "3 to the power of 4 is " << theeExprFour << endl;
    
    int sixExpFive = raiseToPower(6, 5);
    cout << "6 to the power of 5 is " << sixExpFive << endl;

    int twelveExpTen = raiseToPower(12, 10);
    cout << "12 to the power of 10 is " << twelveExpTen << endl;
    return 0;
}