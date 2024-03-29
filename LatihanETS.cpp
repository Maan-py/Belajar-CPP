#include <iostream>
using namespace std;

// struct buku {
//   int no;
//   string judul;
//   int kode;
// };

// struct mhs {
//   int nim;
//   string nama;
//   buku pinjamBuku[3];
// };

int n;
int deretGaJelas(int n) {
  if(n == 0) {
    return 0;
  } else if(n == 1) {
    return 1;
  } else if(n == 2) {
    return 2;
  } else if(n == 5) {
    return deretGaJelas(n - 1) + deretGaJelas(n - 2) + deretGaJelas(n - 3) + deretGaJelas(n - 4);
  } else {
    return deretGaJelas(n - 1) + deretGaJelas(n - 2) + deretGaJelas(n - 3);
  }
}


int main() {
  // mhs mahasiswa[3];

  // getline(cin, mahasiswa[0].pinjamBuku[0].judul);

  // cout << mahasiswa[0].pinjamBuku[0].judul;
  cout << "Masukkan n : ";
  cin >> n;
  cout << deretGaJelas(n);
}