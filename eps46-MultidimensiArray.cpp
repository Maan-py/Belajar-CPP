// Build-in array
// #include <iostream>
// using namespace std;

// void printArray(int *ptrArray, int baris, int kolom) {
//   int index = 0;
//   for(int i = 0; i < baris; i++) {
//     for(int j = 0; j < kolom; j++) {
//       cout << *[ptrArray + index] << " " << endl;
//       index++;
//     }
//     cout << endl;
//   }
// }

// int main() {
//   // array multidimensi
//   // arrayMD[baris][kolom]
//   int arrayMD[2][2] = {1, 2, 3, 4};

//   cout << arrayMD[0][0] << " " << arrayMD[0][1] << endl;
//   cout << arrayMD[1][0] << " " << arrayMD[1][1] << endl;

//   printArray(*arrayMD, 2, 2);
// }

// std library

#include <iostream>
#include <array>
using namespace std;

const int kolom = 3;
const int baris = 2;

void printArray(array <array<int, kolom>, baris> nilaiArray) {
  for(array <int, kolom> vectorBaris : nilaiArray) {
    cout << "[ ";
    for(int nilaiKolom: vectorBaris) {
      cout << nilaiKolom << " ";
    }
    cout << " ]" << endl;
  }
}

int main() {
  array <array <int, kolom> , baris> nilaiMD = {0, 1, 2, 3, 4, 5};
  printArray(nilaiMD);
}