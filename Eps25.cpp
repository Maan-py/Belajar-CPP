#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan panjang pola : ";
    cin >> n;

    cout << "Pola 5" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
   
    return 0;
}