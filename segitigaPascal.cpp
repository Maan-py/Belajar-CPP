#include <iostream>
using namespace std;

int pascalTriangle(int n, int r)
{
  if (r == 0 || r == n)
  {
    return 1;
  }

  return pascalTriangle(n - 1, r - 1) + pascalTriangle(n - 1, r);
}

void printPascalTriangle(int n)
{
  if (n == 0)
  {
    return;
  }

  // Cetak baris pertama (1)
  cout << 1 << " ";

  // Cetak elemen selanjutnya pada baris
  for (int i = 1; i < n; i++)
  {
    int coefficient = pascalTriangle(n - 1, i - 1) + pascalTriangle(n - 1, i);
    cout << coefficient << " ";
  }

  // Cetak baris berikutnya
  cout << endl;

  printPascalTriangle(n - 1);
}


int main()
{
  int n;
  cout << "Masukkan jumlah baris Segitiga Pascal: ";
  cin >> n;

  cout << endl
       << "Segitiga Pascal dengan " << n << " baris:" << endl;

  printPascalTriangle(n);

  return 0;
}
