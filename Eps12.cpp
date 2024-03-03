#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 2;

    bool hasil;

    // operator logika : not, and, or

    // not
    hasil = !(a == 3);
    cout << hasil << endl;

    // and (&&)
    hasil = (a == 3) and (b == 2);
    cout << hasil << endl;

    // or (||)
    hasil = (a <= 3) || (b == 2);
    cout << hasil << endl;


    return 0;
}