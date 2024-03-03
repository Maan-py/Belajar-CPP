#include <iostream>
using namespace std;

union data1 {
  int a;
  char b[4];
};

int main() {
  data1 data_union;

  data_union.a = 123456723;

  cout << data_union.a << endl;
  cout << data_union.b << endl;

  data_union.b[0] = 'a';
  data_union.b[1] = 'b';
  data_union.b[2] = 'c';
  data_union.b[3] = 'd';

  cout << data_union.a << endl;
  cout << data_union.b << endl;
}