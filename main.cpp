#include <iostream>
#include <string>
#include <fstream>
#include "crud.h"

// void checkDatabase(std::fstream &data);
// void writeData(std::fstream &data, int posisi, mahasiswa &inputMahasiswa);
// int getDataSize(std::fstream &data);
// mahasiswa readData(std::fstream &data, int posisi);
// void tampilData(std::fstream &data);
// void tambahData(std::fstream &data);
// void updateData(std::fstream &data);
// void hapusData(std::fstream &data);

int main()
{
  int input;
  char kembali;
  enum option
  {
    CREATE = 1,
    READ,
    UPDATE,
    DELETE,
    FINISH
  };
  std::fstream data;

  crud::checkDatabase(data);

menu:
  system("cls");
  std::cout << "Program CRUD Data Mahasiswa" << std::endl;
  std::cout << "===========================" << std::endl;
  std::cout << "1. Tambah data mahasiswa" << std::endl;
  std::cout << "2. Tampilkan data mahasiswa" << std::endl;
  std::cout << "3. Ubah data mahasiswa" << std::endl;
  std::cout << "4. Hapus data mahasiswa" << std::endl;
  std::cout << "5. Selesai" << std::endl;
  std::cout << "===========================" << std::endl;
  std::cout << "Pilih menu : ";
  std::cin >> input;

  std::cin.ignore();

  do
  {
    switch (input)
    {
    case CREATE:
      std::cout << "Tambahkan data mahasiswa" << std::endl;
      crud::tambahData(data);
      break;
    case READ:
      std::cout << "Tampilkan data mahasiswa" << std::endl;
      crud::tampilData(data);
      break;
    case UPDATE:
      std::cout << "Ubah data mahasiswa" << std::endl;
      crud::tampilData(data);
      crud::updateData(data);
      crud::tampilData(data);
      break;
    case DELETE:
      std::cout << "Hapus data mahasiswa" << std::endl;
      crud::tampilData(data);
      crud::hapusData(data);
      crud::tampilData(data);
      break;
    case FINISH:
      break;
    default:
      std::cout << "Pilih menu yang sesuai";
      goto done;
      break;
    }
    break;
  } while (kembali == 'Y' or kembali == 'y');

  std::cout << "\nKembali ke menu? (y/n) : ";
  std::cin >> kembali;

  if (kembali == 'Y' or kembali == 'y')
  {
    goto menu;
  }
  else if (kembali == 'N' or kembali == 'n')
  {
    return 'a';
  }
  else
  {
    std::cout << "Pilih input yang sesuai" << std::endl;
  }

done:

  std::cout << "\nSelesai";
}
