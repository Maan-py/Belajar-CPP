int crud::getDataSize(std::fstream &data)
{
  int start, end;
  data.seekp(0, std::ios::beg);
  start = data.tellg();
  data.seekg(0, std::ios::end);
  end = data.tellg();

  return (end - start) / sizeof(crud::mahasiswa);
}

void crud::checkDatabase(std::fstream &data)
{
  data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);
  // cek file ada atau tidak
  if (data.is_open())
  {
    std::cout << "Database ditemukan\n"
              << std::endl;
  }
  else
  {
    std::cout << "Database tidak ditemukan, buat database baru\n"
              << std::endl;
    data.close();
    // kalau database tidak ada, paksa buat. trunc = kalau ada/tidak ada database dihapus
    data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
  }
}

void crud::writeData(std::fstream &data, int posisi, crud::mahasiswa &inputMahasiswa)
{
  data.seekp((posisi - 1) * sizeof(crud::mahasiswa), std::ios::beg);
  data.write(reinterpret_cast<char *>(&inputMahasiswa), sizeof(crud::mahasiswa));
}

crud::mahasiswa crud::readData(std::fstream &data, int posisi)
{
  crud::mahasiswa readMahasiswa;
  data.seekg((posisi - 1) * sizeof(crud::mahasiswa), std::ios::beg);
  data.read(reinterpret_cast<char *>(&readMahasiswa), sizeof(crud::mahasiswa));

  return readMahasiswa;
}

void crud::tampilData(std::fstream &data)
{
  system("cls");
  int size = crud::getDataSize(data);
  crud::mahasiswa showMahasiswa;
  std::cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << std::endl;
  for (int i = 1; i <= size; i++)
  {
    showMahasiswa = crud::readData(data, i);
    std::cout << i << "\t";
    std::cout << showMahasiswa.pk << "\t";
    std::cout << showMahasiswa.nama << "\t";
    std::cout << showMahasiswa.NIM << "\t";
    std::cout << showMahasiswa.jurusan << std::endl;
  }
}

void crud::tambahData(std::fstream &data)
{
  system("cls");
  crud::mahasiswa inputMahasiswa, lastMahasiswa;

  int size = crud::getDataSize(data);
  std::cout << "Ukuran data " << size << std::endl;

  if (size == 0)
  {
    inputMahasiswa.pk = 1;
  }
  else
  {
    lastMahasiswa = crud::readData(data, size);
    std::cout << "pk = " << lastMahasiswa.pk << std::endl;
    inputMahasiswa.pk = lastMahasiswa.pk + 1;
  }

  // crud::readData(data, size);

  std::cout << "Nama : ";
  std::cin.get(inputMahasiswa.nama, 25);

  std::cin.ignore();

  std::cout << "NIM : ";
  std::cin.get(inputMahasiswa.NIM, 25);

  std::cin.ignore();

  std::cout << "Jurusan : ";
  std::cin.get(inputMahasiswa.jurusan, 25);

  crud::writeData(data, size + 1, inputMahasiswa);
}

void crud::updateData(std::fstream &data)
{
  int nomor;
  crud::mahasiswa updateMahasiswa;
  std::cout << "Pilih nomor : ";
  std::cin >> nomor;

  updateMahasiswa = crud::readData(data, nomor);
  std::cout << "Nama : " << updateMahasiswa.nama << std::endl;
  std::cout << "NIM : " << updateMahasiswa.NIM << std::endl;
  std::cout << "Jurusan : " << updateMahasiswa.jurusan << std::endl;

  std::cout << "\nUbah data : " << std::endl;

  std::cin.ignore();

  std::cout << "Nama : ";
  std::cin.get(updateMahasiswa.nama, 25);

  std::cin.ignore();

  std::cout << "NIM : ";
  std::cin.get(updateMahasiswa.NIM, 25);

  std::cin.ignore();

  std::cout << "Jurusan : ";
  std::cin.get(updateMahasiswa.jurusan, 25);

  crud::writeData(data, nomor, updateMahasiswa);
}

void crud::hapusData(std::fstream &data)
{
  int nomor, size, offset;
  crud::mahasiswa blankMahasiswa, tempMahasiswa;
  std::fstream tempData;
  size = crud::getDataSize(data);

  // 1. pilih nomor yg mau dihapus
  std::cout << "\nPilih nomor : ";
  std::cin >> nomor;

  // 2. di posisi ini diisi dengan data kosong
  crud::writeData(data, nomor, blankMahasiswa);
  // 3. kita cek data yang ada dari file data.bin, kalau ada data kita pindahkan ke file sementara
  tempData.open("temp.dat", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

  offset = 0;

  for (int i = 1; i <= size; i++)
  {
    tempMahasiswa = crud::readData(data, i);
    if (tempMahasiswa.nama[0] != '\0')
    {
      crud::writeData(tempData, i - offset, tempMahasiswa);
    }
    else
    {
      offset++;
      std::cout << "Deleted item" << std::endl;
    }
  }
  // 4. kita pindahkan data dari file sementara ke data.bin
  size = crud::getDataSize(tempData);
  data.close();
  data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::binary);
  data.close();
  data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

  for (int i = 1; i <= size; i++)
  {
    tempMahasiswa = crud::readData(tempData, i);
    crud::writeData(data, i, tempMahasiswa);
  }
}