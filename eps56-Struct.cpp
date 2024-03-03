#include <iostream>
using namespace std;

struct buah
{
  string warna;
  int harga;
  float berat;
  string rasa;
};

struct mahasiswa
{
  string nama;
  int nim;
  string jurusan;
};

char hitungNilaiHuruf(float nilaiAngka)
{
  if (nilaiAngka >= 75)
  {
    return 'A';
  }
  else if (nilaiAngka >= 60)
  {
    return 'B';
  }
  else if (nilaiAngka >= 40)
  {
    return 'C';
  }
  else if (nilaiAngka >= 20)
  {
    return 'D';
  }
  else
  {
    return 'E';
  }
}

struct mahasiswaAlgo2
{
  int noMhs;
  string nama;
  string kelas;
  float nilaiAngka;
  char nilaiHuruf;
};

int main()
{
  mahasiswaAlgo2 mahasiswa1;
  // buah jeruk;
  // buah anggur;

  // jeruk.warna = "orange";
  // jeruk.harga = 2500;
  // jeruk.berat = 5.6;
  // jeruk.rasa = "asam";

  // cout << jeruk.warna << endl;
  // cout << jeruk.harga << endl;
  // cout << jeruk.berat << endl;
  // cout << jeruk.rasa << endl;

  // anggur.warna = "ungu";
  // anggur.harga = 3000;
  // anggur.berat = 2.1;
  // anggur.rasa = "manis";

  // cout << anggur.warna << endl;
  // cout << anggur.harga << endl;
  // cout << anggur.berat << endl;
  // cout << anggur.rasa << endl;
  cout << "Masukkan nama : ";
  getline(cin, mahasiswa1.nama);

  cout << "Masukkan NIM : ";
  cin >> mahasiswa1.noMhs;

  cin.ignore();

  cout << "Masukkan kelas : ";
  getline(cin, mahasiswa1.kelas);

  cout << "Masukkan nilai : ";
  cin >> mahasiswa1.nilaiAngka;

  cout << "Data mahasiswa : " << endl;
  cout << mahasiswa1.nama << endl;
  cout << mahasiswa1.noMhs << endl;
  cout << mahasiswa1.kelas << endl;
  cout << mahasiswa1.nilaiAngka << endl;
  cout << hitungNilaiHuruf(mahasiswa1.nilaiAngka);
}