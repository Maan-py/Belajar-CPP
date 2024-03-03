#include <iostream>
using namespace std;

// ? - True
// : - False

int main() {
  int a, b;
  string hasil1, hasil2, output;

  hasil1 = "awoaowk";
  hasil2 = "hah";

  cout << "Masukkan a : ";
  cin >> a;

  cout << "Masukkan b : ";
  cin >> b;

  output = (a < b) ? hasil1 : hasil2;

  // if(a < b) {
  //   cout << hasil1;
  // } else {
  //   cout << hasil2;
  // }

  cout << output << endl;
}