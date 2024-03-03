#include <iostream>
using namespace std;

int main()
{
    float angka1, angka2, hasil;
    char aritmatika;

    cout << "Selamat Datang di Program Kalkulator!\n\n";
n
    // Mulai
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Pilih operator +, -, *, / : ";
    cin >> aritmatika;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    cout << "\nHasil perhitungan : ";
    cout << angka1 << " " << aritmatika << " " << angka2 << endl;

    // if(aritmatika == '+') {
    //     hasil = angka1 + angka2;
    // } else if(aritmatika == '-') {
    //     hasil = angka1 - angka2;
    // } else if(aritmatika == '*') {
    //     hasil = angka1 * angka2;
    // } else if(aritmatika == '/') {
    //     hasil = angka1 / angka2;
    // } else {
    //     cout << "Mohon masukkan operator yang sesuai :D";
    // }

    switch (aritmatika)
    {
    case '+':
        hasil = angka1 + angka2;
        break;

    case '-':
        hasil = angka1 - angka2;
        break;

    case '*':
        hasil = angka1 * angka2;
        break;

    case '/':
        hasil = angka1 / angka2;
        break;

    default:
        cout << "Masukkan operator yang benar!";
        break;
    }

    cout << "Hasil perhitungan anda = " << hasil;

    return 0;
}