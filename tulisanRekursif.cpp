#include <iostream>
#include <string.h>
using namespace std;

char nama[30];

void tulisan(int n)
{
  if (n == 0 || n == 1)
  {
    cout << nama[n];
  }
  else
  {
    cout << nama[n];
    tulisan(n - 2);
    cout << nama[n];
  }
}

int main()
{
  // int n;
  // cout << "nama Anda (tanpa spasi) = ";
  // cin >> nama;
  // n = strlen(nama) - 1;
  // cout << "hasil = ";
  // tulisan(n);

  int a = 10;
  int b = 20;

  int temp = a;
  a = b;
  b = temp;

  cout << a << endl;
  cout << b;

}