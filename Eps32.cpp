#include <iostream>
using namespace std;

int x = 10; // global

int ambilGlobal() {
    return x;
}

int main() {
    cout << "1. variabel global : " << x << endl;

    int x = 8;

    {
        int x = 1; // block scope (tidak merubah nilai)
    }

    cout << "2. variabel local main : " << x << endl;
    cout << "3. variabel ambilGlobal : " << ambilGlobal() << endl;


    return 0;
}