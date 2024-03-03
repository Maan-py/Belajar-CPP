#include <iostream>
using namespace std;

int angka1, angka2, hasil, pilihan;

int penjumlahan(int angka1, int angka2) {
    return angka1 + angka2;
}

int pengurangan(int angka1, int angka2) {
    return angka1 - angka2;
}

int perkalian(int angka1, int angka2) {
    return angka1 * angka2;
}

int pembagian(int angka1, int angka2) {
    return angka1 / angka2;
}

int main() {
    puts("Kalkulator Sederhana");
    puts("1. Penjumlahan");
    puts("2. Pengurangan");
    puts("3. Perkalian");
    puts("4. Pembagian");

    cout << "Pilih operasi : ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        cout << "Masukkan angka 1 : ";
        cin >> angka1;

        cout << "Masukkan angka 2 : ";
        cin >> angka2;

        cout << "Hasil Penjumlahan adalah : " << penjumlahan(angka1, angka2);
        break;
    case 2:
        cout << "Masukkan angka 1 : ";
        cin >> angka1;

        cout << "Masukkan angka 2 : ";
        cin >> angka2;

        cout << "Hasil Pengurangan adalah : " << pengurangan(angka1, angka2);
        break;
    case 3:
        cout << "Masukkan angka 1 : ";
        cin >> angka1;

        cout << "Masukkan angka 2 : ";
        cin >> angka2;

        cout << "Hasil Perkalian adalah : " << perkalian(angka1, angka2);
        break;
    case 4:
        cout << "Masukkan angka 1 : ";
        cin >> angka1;

        cout << "Masukkan angka 2 : ";
        cin >> angka2;

        cout << "Hasil Pembagian adalah : " << pembagian(angka1, angka2);
        break;
    default:
        break;
    }
}