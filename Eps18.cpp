#include <iostream>
using namespace std;

int main()
{
    // increment and decrement
    // pre-increment and post-increment
    int a = 5;
    int b = 5;

    // post-increment
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    // pre-increment
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;

    return 0;
}