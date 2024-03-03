#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 3;

    int hasil;
    // operatornya +, -, *, /, %

    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // urutan ekseskusi
    hasil = a + b * a;
    cout << hasil << endl;

    cin.get();
    return 0;
}