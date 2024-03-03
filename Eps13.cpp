#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukkan angka = ";
    cin >> a;

    // if statement
    if (a % 2 == 0) {
        cout << "Angka genap";
    } else if (a % 2 == 1) {
        cout << "Angka ganjil";
    }
    

    // cout << a << endl;

    return 0;
}