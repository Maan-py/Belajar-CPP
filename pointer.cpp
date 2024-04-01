// #include <iostream>
// #include <malloc.h>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//   int *p, *q, *r;
//   int n = 10;
//   p = (int *)malloc(n * sizeof(int));
//   q = (int *)malloc(n * sizeof(int));

//   p = &n;
//   *q = 120;
//   r = p;

//   cout << "Isi info pointer : \n";
//   cout << "p = " << *p << endl;
//   cout << "q = " << *q << endl;
//   cout << "r = " << *r << endl;

//   cout << "\nAlamat register pointer : \n";
//   cout << "p = " << p << endl;
//   cout << "q = " << q << endl;
//   cout << "r = " << r << endl;

//   n = *q;
//   p = q;

//   cout << "\nKondisi akhir isi info pointer : \n";
//   cout << "n = " << n << endl;
//   cout << "p = " << *p << endl;
//   cout << "q = " << *q << endl;
//   cout << "r = " << *r << endl;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//   int x, y; // x & y bertipe int

//   int *px; // px pointer yang menunjuk objek bertipe int

//   x = 87;

//   px = &x; // px berisi alamat dari x ypx; // y berisi nilai yang ditunjuk px

//   y = *px; // y berisi nilai yang ditunjuk px

//   cout << "alamat x = " << &x << endl;

//   cout << "isi px x = " << px << endl;

//   cout << "nilai yang ditunjuk oleh px = " << *px << endl;

//   cout << "nilai y = " << y << endl;
// }

// Array & Pointer
// contoh pengaksesan isi array menggunakan pointer
// #include <iostream>
// using namespace std;

// int main() {
//   static int tgl_lahir[] = {27, 8, 1997};
//   int i;
//   int *ptgl_lahir;

//   ptgl_lahir = tgl_lahir; // ptgl_lahir menunjuk ke array tgl_lahir

//   for(i = 0; i < 3; i++) {
//     cout << *(ptgl_lahir + i) << " "; // 27 9 1999
//   }
//   cout << endl;
// }

// function menukar angka denganpointer

// contoh pointer sebagai parameter fungsi
// #include <iostream>
// using namespace std;
// void naikkannilai(int *x, int *y);
// int main()
// {
//   int a = 3;
//   int b = 7;
//   cout << "semula : a = " << a << "b = " << b << endl;
//   naikkannilai(&a, &b);
//   cout << "kini: a = " << a << " b = " << b << endl;
// }

// void naikkannilai(int *x, int *y)
// {
//   *x = *x + 2;
//   *y = *y + 2;
// }

// contoh fungsi dengan keluaran berupa pointer
// #include <iostream>
// using namespace std;
// char *nama_hari(int n);
// int main()
// {
//   int hr;
//   cout << "hari (1..7): ";
//   cin >> hr;
//   cout << nama_hari(hr) << endl;
// }

// char *nama_hari(int n)
// {
//   static char *hari[] = {"kode hari salah", "senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};

//   return (n < 1 || n > 7) ? hari[0] : hari[n];
// }

#include <iostream>
using namespace std;

int main() {
  // buatlah suatu program dengan menggunakan pointer untuk menampilkan output
  // Pemrograman Dasar Turbo C
  // Dasar Turbo C
  // Turbo C

  char *judul[] = {"Pemrograman Dasar Turbo C", "Dasar Turbo C", "Turbo C"};
  char **pjdl = judul;

  for (int i = 0; i < 3; i++) {
    cout << *(pjdl + i) << endl;
  }
}
