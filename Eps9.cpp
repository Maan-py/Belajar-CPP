#include <iostream>
#include <limits>

using namespace std;

int main() {
    // bilangan bulat
    int a = 5; // 32-bit
    long b = 6;
    short c = 7;

    // bilangan desimal
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'a'; // character 1-bit

    // boolean
    bool g = true; // true/false

    cout << numeric_limits<unsigned int>::max();
}