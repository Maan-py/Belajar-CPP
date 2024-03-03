#include <iostream>
using namespace std;

int main() {
  int arrayNilai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for(int nilai : arrayNilai) {
    cout << "address" << &nilai << "nilainya : " << nilai << endl;
    nilai = 1; // gak berubah {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  }

  cout << endl;

  for(int &nilaiRef : arrayNilai) {
    // memanipulasi array dengan reference
    nilaiRef *= 2;
  }

  cout << endl;

  for(int &nilaiRef : arrayNilai) {
   cout << "address : " << &nilaiRef << " nilainya " << nilaiRef << endl;
   // {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
  }


}