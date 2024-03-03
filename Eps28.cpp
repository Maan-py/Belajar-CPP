#include <iostream>
using namespace std;

int kuadrat(int x) {
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b) {
    int c;

    c = a + b;

    return c;
}


int main() {
    int input, hasil, hasil2, a, b;
    cout << "Nilai kuadrat dari : ";
    cin >> input;

    hasil = kuadrat(input);

    cout << hasil << endl;

    cout << "Masukkan nilai A : ";
    cin >> a;
    cout << "Masukkan nilai B : ";
    cin >> b;

    hasil2 = tambah(a, b);
    cout << hasil2 << endl;

    return 0;
}