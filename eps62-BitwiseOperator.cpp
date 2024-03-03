#include <iostream>
#include <bitset>
using namespace std;

void printBinary(unsigned short val, string nama) {
  cout << nama << " = " << bitset<8>(val) << endl;
}

int main() {
  unsigned short a = 6;
  unsigned short b = 10;
  unsigned short c;

  cout << "& = Bitwise AND" << endl;
  c = a & b;
  printBinary(a, "a");
  printBinary(b, "b");
  printBinary(c, "c");

  cout << c << endl;

  cout << "| = Bitwise OR" << endl;
  c = a | b;
  printBinary(a, "a");
  printBinary(b, "b");
  printBinary(c, "c");

  cout << c << endl;

  cout << "^ = Bitwise XOR" << endl;
  c = a ^ b;
  printBinary(a, "a");
  printBinary(b, "b");
  printBinary(c, "c");

  
  cout << c << endl;

  cout << "~ = Bitwise NOT" << endl;
  c = ~a;
  printBinary(a, "a");
  printBinary(c, "c");

  cout << c << endl;

  cout << "<< = Shift Left" << endl;
  c = a << 2;
  printBinary(a, "a");
  printBinary(c, "c");

  cout << c << endl;

  cout << ">> = Shift Right" << endl;
  c = a >> 2;
  printBinary(a, "a");
  printBinary(c, "c");

  cout << c << endl;
}