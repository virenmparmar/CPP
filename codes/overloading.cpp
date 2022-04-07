//A program to demonstrate function overloadings in C++
#include <iostream>
using namespace std;

//Function to print String
void printOnNewLine(string str) {
    cout << "String: " << str << endl;
}

//Function to print integer
void printOnNewLine(int num) {
    cout << "Integer: " << num << endl;
}

//Function to print two integers
void printOnNewLine(int num1, int num2) {
    cout << "Two integers: "<< num1 << " and " << num2 << endl;
}


int main() {

    printOnNewLine("Hello");
    printOnNewLine(2);
    printOnNewLine(2 , 5);
}