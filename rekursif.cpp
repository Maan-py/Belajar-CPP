// #include <iostream>
// using namespace std;

// int awal, akhir;
// int deretGanjil(int awal, int akhir);

// int main() {
//   cout << "Masukkan awal : ";
//   cin >> awal;

//   cout << "Masukkan akhir : ";
//   cin >> akhir;

//   for(int i = awal; i <= akhir; i++) {
//     if(i % 2 != 0) {
//       cout << i << " + ";
//     }
//   }

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

// •	Menu 4 : Buat deret bilangan ganjil
//  Gunakan fungsi rekursif
//  Bilangan awal dan akhir ditentukan user
//  Contoh 1 : awal = 1, akhir = 8. Output = 1 + 3 + 5 + 7 = 16
//  Contoh 2 : awal = 2, akhir = 9. Output = 3 + 5 + 7 + 9 = 24

// buat deret bilangan ganjil
// Path: rekursif.cpp
 #include <iostream>
  using namespace std;

  int awal, akhir;

  int deretGanjil(int awal, int akhir);

  int main() {
    cout << "Masukkan awal : ";
    cin >> awal;

    cout << "Masukkan akhir : ";
    cin >> akhir;

    for(int i = awal; i <= akhir; i++) {
      if(i % 2 != 0) {
        cout << i << " + ";
      }
    }

    cout << " = " << deretGanjil(awal, akhir);
  }

  
