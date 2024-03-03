#include <iostream>
using namespace std;

int luasPersegi(int p, int l) {
    int c;
    c = p * l;

    return c;
}

int kelilingPersegi(int p, int l) {
    int c;
    c = 2 * (p + l);

    return c;
}

void tampilkanLuas(int p, int l) {
    cout << "Luas persegi adalah : ";
    cout << luasPersegi(p, l) << endl;

}

void tampilkanKeliling(int p, int l) {
    cout << "Keliling persegi adalah : ";
    cout << kelilingPersegi(p, l) << endl;

}

int main() {
    int p, l;

    cout << "Masukkan panjang persegi : ";
    cin >> p;

    cout << "Masukkan lebar persegi : ";
    cin >> l;

    tampilkanLuas(p, l);
    tampilkanKeliling(p, l);

    return 0;
}