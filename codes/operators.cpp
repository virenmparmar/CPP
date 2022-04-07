//Relational and logical operators in C++

#include <iostream>
using namespace std;
int main(){
    int x = 6;
    int y = 2;
    bool ans = (x > y);
    cout << std :: boolalpha;
    cout << "x > y is " << ans << endl; //true
    ans = x < 5;
    cout << "x < 5 is " << ans << endl; //false
    ans = !(x > 2);
    cout << "x > 2 is " << ans << endl; //false
    ans = (x > y) && (y > 0);
    cout << "x > y && y > 0 is " << ans << endl; //true
    ans = (x < y) && (y > 0);
    cout << "x < y && y > 0 is " << ans << endl; //false
    ans = (x > y) || (y > 0);
    cout << "x > y || y > 0 is " << ans << endl; //true
    return 0;
}