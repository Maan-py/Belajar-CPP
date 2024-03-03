#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  int c;

  a = (b = 1, cout << b << endl, c = 2, cout << c << endl, (b + c));
  // c = 2;
  // a = b + c;
  // b = 1;
  // c = 2;
  // a = b + c;
  
  cout << a << endl;
}