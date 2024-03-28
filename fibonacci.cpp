#include <iostream>
using namespace std;

int n;
int deret(int n);

int main() {
  cout << "Masukkan n : ";
  cin >> n;

  cout << deret(n);
}

int deret(int n) {
  if(n == 1) {
    return 1;
  } else if(n == 2) {
    return 2;
  } else {
    return deret(n - 2) + deret(n - 1);
  }
}