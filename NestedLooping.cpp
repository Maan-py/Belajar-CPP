#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan n : ";
    cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Segitiga terbalik
    // for(int i = 10; i >= 1; i--) {
    //     for(int j = 1; j < i; j++) {
    //         cout << " ";
    //     }

    //     for(int k = 1; k < 10; k++) {
    //         cout << "*";
    //     }
    //     cout << "*" << endl;
    // }

    // for(int i = 1; i <= n; i++) {
    //     for(int j = n; j > i; j--) {
    //         cout << " ";
    //     }

    //     for(int k = 1; k < i; k++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            cout << " ";
        }

        for(int k = n; k > i; k--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

