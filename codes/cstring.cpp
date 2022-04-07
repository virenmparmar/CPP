//This program is an expample to illustrate C++ cstring library.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fragment1[] = "I'm a s";
    char fragment2[] = "tring!";
    char fragment3[20];
    char finalString[40] = "";

    strcpy(fragment3, fragment1);//Copies fragment1 to fragment3
    strcat(finalString, fragment3);//Concatenates fragment3 to finalString
    strcat(finalString, fragment2);//Concatenates fragment2 to finalString
    cout << finalString << endl;
    return 0;
}