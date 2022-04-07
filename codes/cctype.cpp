//This code is an illustration of c++ cctype library.
//This code will convert a messy string to lower case.

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char messyString[] = "t6H0I9s6.iS.999a9.STRING";
    char currentChar = messyString[0];
    for(int i=0; currentChar != '\0'; currentChar = messyString[++i] ){
        if(isalpha(currentChar)){
            cout << (char)(isupper(currentChar) ?tolower(currentChar):currentChar);
        } else if(ispunct(currentChar)){
            cout << ' ';
        }
    }
    cout << endl;
    return 0;
}