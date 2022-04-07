//A program to demonstrate recursion in C++

#include <iostream>
using namespace std;

//Function to recursively calculate the nth number of the fibonacci series
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "The fibonacci number is: " << fibonacci(n) << endl;
}