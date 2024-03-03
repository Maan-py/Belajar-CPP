// #include <iostream>
// using namespace std;

// struct aktor {
//   string nama;
//   int tahun_lahir;
// };

// struct film {
//   string judul;
//   string genre;
//   int tahun;
//   // struct aktor
//   aktor pemeran_1;
//   aktor pemeran_2;
// };

// int main() {
//   film film1;
//   aktor aktor1, aktor2;

//   // buat aktor1
//   aktor1.nama = "Awikwok";
//   aktor1.tahun_lahir = 1975;

//   //buat aktor2
//   aktor2.nama = "WOKWOK";
//   aktor2.tahun_lahir = 1998;

//   // buat film
//   film1.judul = "Dilan";
//   film1.genre = "Romance";
//   film1.tahun = 2001;
//   film1.pemeran_1 = aktor1;
//   film1.pemeran_2 = aktor2;

//   cout << film1.judul << endl;
//   cout << film1.pemeran_2.tahun_lahir << endl;
//   cout << film1.pemeran_1.nama;
// }

#include <iostream>
using namespace std;

struct aktor {
  string nama;
  int tahun_lahir;
};

struct film {
  string judul;
  int tahun;
  string genre;
  aktor pemeran_1;
  aktor pemeran_2;
};

int main() {
  film film1;
  aktor aktor1, aktor2;

  aktor1.nama = "Bani";
  aktor1.tahun_lahir = 2000;

  aktor2.nama = "Dani";
  aktor2.tahun_lahir = 2001;

  film1.judul = "Dilan";
  film1.tahun = 1997;
  film1.genre = "Romance";
  film1.pemeran_1 = aktor1;
  film1.pemeran_2 = aktor2;

  cout << film1.pemeran_1.nama << endl;
  cout << film1.pemeran_2.tahun_lahir << endl;
  cout << film1.judul;
}