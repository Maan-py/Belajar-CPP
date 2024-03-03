#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream myFile;

  // ios::out = output, default;
  // ios::app = menuliskan pada akhir baris;
  // ios::trunc = membuat file jika tidak ada dan kalau ada di hapus, default;

  myFile.open("eps64.txt", ios::out);
  myFile << "penulisan pada data";
  myFile.close();

  myFile.open("data2.txt", ios::trunc);
  myFile << "penulisan pada data2";
  myFile.close();

  myFile.open("data3.txt", ios::app); // append
  myFile << "menuliskan data pada data4";
  myFile.close();
}
