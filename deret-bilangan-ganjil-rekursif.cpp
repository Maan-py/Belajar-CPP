// // buat deret bilangan ganjil menggunakan rekursif
// #include <iostream>
// using namespace std;

// int awal, akhir;

// int deretGanjil(int awal, int akhir);

// int main() {
//   cout << "Masukkan awal : ";
//   cin >> awal;

//   cout << "Masukkan akhir : ";
//   cin >> akhir;

//   cout << " = " << deretGanjil(awal, akhir);
// }

// int deretGanjil(int awal, int akhir) {
//   if(awal > akhir) {
//     return 0;
//   } else {
//     if(awal % 2 != 0) {
//       return awal + deretGanjil(awal + 1, akhir);
//     } else {
//       return deretGanjil(awal + 1, akhir);
//     }
//   }
// }

// #include <iostream>
// using namespace std;

// int a, b;
// int x(int a, int b);

// int main()
// {
//   cout << "Masukkan a : ";
//   cin >> a;

//   cout << "Masukkan b : ";
//   cin >> b;

//   cout << x(a, b);
// }

// int x(int a, int b)
// {
//   if (b == 0)
//   {
//     return 1;
//   }
//   else
//   {
//     return a * x(a, b - 1);
//   }
// }

// #include <iostream>
// using namespace std;

// int a;
// int x(int a);

// int main()
// {
//   cout << "Masukkan a : ";
//   cin >> a;

//   cout << x(a);
// }

// int x(int a)
// {
//   if (a == 1)
//   {
//     return 2;
//   }
//   else
//   {
//     return x(a - 1) + 2;
//   }
// }

#include <iostream>
using namespace std;

int n;
int deret(int n);

int main()
{
  cout << "Masukkan deret ke : ";
  cin >> n;

  cout << "Hasil : " << deret(n) << endl;
  // cout << "Masukkan pangkat : ";
  // cin >> pangkat;

  // cout << perpangkatan(angka, pangkat);
  // cout << deret(n);
  cout << "deret"
       << " : ";
  for (int i = 1; i <= n; i++)
  {
    cout << i * 2 << " ";
  }
}

int deret(int n)
{
  if (n == 1)
  {
    return 2;
  }
  else
  {
    return n * 2 + deret(n - 1);
  }
}