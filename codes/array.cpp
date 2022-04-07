// This program is an example of array declaration and access.
#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    cout << "sum = " << s << endl;
    return s;
}

int main(){
    cout << "Enter 4 integers: " << endl;
    int a[4];
    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }
    cout << "The array is: " << endl;
    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    cout << "The sum of the array is " << sum(a, 4) << endl;
    cout << endl;
    return 0;
}