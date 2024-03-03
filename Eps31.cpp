#include <iostream>
using namespace std;

float luas(float p, float l);
void printLn(float x);

int main() {
    float p, l, luas;

    cout << "Panjang : ";
    cin >> p;

    cout << "Lebar : ";
    cin >> l;

    luas = p * l;
    printLn(luas);

    return 0;
}

float luas(float p, float l) {
    return p * l;
}

void printLn(float x) {
    cout << "Hasil : " << x << endl;
}