#include <iostream>
using namespace std;

enum warna {
  merah, putih, hitam, coklat = 5, kuning, biru
  // 0, 1, 2, 5, 6, 7
};

int main() {  
  warna kain;

  kain = biru;

  cout << kain << endl;
}