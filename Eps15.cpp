#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukkan nilai : ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Ini angka 1" << endl;
        break;
    case 2:
        cout << "Ini angka 2" << endl;
        break;
    case 3: 
        cout << "Ini angka 3" << endl;
        break;

    default:
        cout << "Bukan 1, 2, dan 3" << endl;
        break;
    }

    cout << "Selesai";

    return 0;
}