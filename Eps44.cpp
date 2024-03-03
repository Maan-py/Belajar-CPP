#include <iostream>
using namespace std;

int nilai[10];

int main() {
  cout << "Program menampilkan grafik nilai\n" << endl;

  for(int i = 0; i <= 10; i++) {
    if(i == 0) {
      cout << "Jumlah mahasiswa yang mendapat nilai 0-9 : ";
      cin >> nilai[i];
    } else if(i == 10) {
      cout << "Jumlah mahasiswa yang mendapat nilai 100 : ";
      cin >> nilai[i];
    } else {
      cout << "Jumlah mahasiswa yang mendapat nilai " << i * 10 << " - " << (i * 10 + 9) << " : ";
      cin >> nilai[i];
    }
    cout << endl;
  }

 for(int i = 0; i <= 10; i++) {
    if(i == 0) {
      cout << "nilai 0-9     : ";
    } else if(i == 10) {
      cout << "nilai 100     : ";
    } else {
      cout << "nilai " << i * 10 << " - " << (i * 10 + 9) << " : ";
    }

    for (int j = 0; j <= nilai[i]; j++) {
      cout << "*";
    }

    cout << endl;
  }
}