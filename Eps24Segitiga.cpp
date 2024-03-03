#include <iostream>
using namespace std;

int main() {
    int count;

    cout << "Masukkan jumlah * : ";
    cin >> count;

    cout << "Pola 1" << endl;
    cout << endl;

    for (int i = 1; i <= count; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }    
        cout << endl;
    }

    cout << endl;
    cout << "Pola 2" << endl;
    cout << endl;

    for (int i = 1; i <= count; i++) {
        for (int j = count; j >= i; j--) {
            cout << i;
        }
        cout << endl;
    }

    // make a triangle sorted number

    cout << endl;
    cout << "Pola 3" << endl;
    cout << endl;

    for (int i = 1; i <= count; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        for (int k = count; k >= i; k--) {
            cout << "*";
        }
        cout << endl;  
    }

    // make a flip * triangle
    cout << endl;
    cout << "Pola 4" << endl;
    cout << endl;

    for (int i = 1; i <= count; i++) {
        for (int j = count; j > i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << 
        endl;  
    }

    // Make a number triangle
    cout << endl;
    cout << "Pola 5" << endl;
    cout << endl;

    for (int i = 1; i <= count; i++) {
        for (int j = count; j > i; j--) {
            cout << "*";
        }

        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        cout << 
        endl;  
    }
}