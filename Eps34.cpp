#include <iostream>
using namespace std;

// overloading = menimpa

// basic function
int luasKotak(int panjang, int lebar)
{
    int luas = panjang * lebar;
    return luas;
}

// overload function
int luasKotak(int panjang)
{
    int luas = panjang * panjang;
    return luas;
}

double luasKotak(double panjang)
{
    double luas = panjang * panjang;
    return luas;
}

int main()
{
    cout << "Luas kotak 2x3 : " << luasKotak(2, 3) << endl;
    cout << "Luas kotak 2x2 : " << luasKotak(2) << endl;
    cout << "Luas kotak 2.5x2.5 : " << luasKotak(2.5) << endl;

    return 0;
}