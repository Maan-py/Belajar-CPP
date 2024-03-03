#include <iostream>
using namespace std;

double volume_kubus(double p, double l, double t = 2);

int main() {
    cout << "volume kubus : " << volume_kubus(3, 4, 5) << endl;

    cout << "volume kubus : " << volume_kubus(3, 4);

    return 0;
}

double volume_kubus(double p, double l, double t) {
    return p * l * t;
}