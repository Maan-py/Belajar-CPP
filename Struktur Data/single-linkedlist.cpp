#include <iostream>
using namespace std;

// deklarasi single linkedlist
struct Buku
{
  // komponen / member
  string judul, pengarang;
  int tahunTerbit;
  Buku *next;
};

Buku *head, *tail, *current, *newNode, *del;

// fungsi untuk membuat single linked list
void createSingleLinkedList(string judul, string pengarang, int tahunTerbit)
{
  head = new Buku();

  head->judul = judul;
  head->pengarang = pengarang;
  head->tahunTerbit = tahunTerbit;
  head->next = NULL;

  tail = head;
}

int countSingleLinkedList()
{
  int count = 0;
  Buku *current;
  current = head;
  while (current != NULL)
  {
    count++;
    current = current->next;
  }

  return count;
}


// fungsi untuk menambahkan awal data single linked list
void addFirst(string judul, string pengarang, int tahunTerbit)
{
  newNode = new Buku();

  // pengisian node 1
  newNode->judul = judul;
  newNode->pengarang = pengarang;
  newNode->tahunTerbit = tahunTerbit;
  newNode->next = head;

  head = newNode;
}

// fungsi untuk menambahkan akhir data single linked list
void addLast(string judul, string pengarang, int tahunTerbit)
{
  newNode = new Buku();

  newNode->judul = judul;
  newNode->pengarang = pengarang;
  newNode->tahunTerbit = tahunTerbit;
  newNode->next = NULL;

  tail->next = newNode;
  tail = newNode;
}

// fungsi untuk menambahkan tengah data single linked list
void addMiddle(string judul, string pengarang, int tahunTerbit, int posisi)
{
  if(posisi < 1 || posisi > countSingleLinkedList()) {
    cout << "Posisi tidak valid" << endl;
  } else {
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tahunTerbit;

    current = head;
    int nomor = 1;
    while(nomor < posisi - 1) {
      current = current->next;
      nomor++;
    }

    newNode->next = current->next;
    current->next = newNode;
  }
}

// fungsi untuk menghapus data awal single linked list
void removeFirst() {
  del = head;
  head = head->next;
  delete del;
}

// fungsi untuk menghapus data akhir single linked list
void removeLast() {
  del = tail;
  current = head;

  while(current->next != tail) {
    current = current->next;
  }

  tail = current;
  tail->next = NULL;

  delete del;
}

// fungsi untuk menghapus data tengah single linked list
void removeMiddle(int posisi) {
  if(posisi < 1 || posisi > countSingleLinkedList()) {
    cout << "Posisi tidak valid" << endl;
  } else {
    current = head;
    int nomor = 1;
    while(nomor < posisi - 1) {
      current = current->next;
      nomor++;
    }

    del = current->next;
    current->next = del->next;
    delete del;
  }
}

// fungsi untuk mengubah data awal single linked list
void changeFirst(string judul, string pengarang, int tahunTerbit) {
  head->judul = judul;
  head->pengarang = pengarang;
  head->tahunTerbit = tahunTerbit;
}

// fungsi untuk mengubah data akhir single linked list
void changeLast(string judul, string pengarang, int tahunTerbit) {
  tail->judul = judul;
  tail->pengarang = pengarang;
  tail->tahunTerbit = tahunTerbit;
}

// fungsi untuk menampilkan data single linked list
void printSingleLinkedList()
{
  cout << "Jumlah Data : " << countSingleLinkedList() << endl;
  current = head;
  while (current != NULL)
  {
    cout << "Judul Buku : " << current->judul << endl;
    cout << "Pengarang Buku : " << current->pengarang << endl;
    cout << "Tahun Terbit Buku : " << current->tahunTerbit << endl;

    current = current->next;
  }
}

int main()
{
  // // inisialisasi single linked list
  // Buku *node1, *node2, *node3;

  // // node1 = (Buku*)malloc(sizeof(Buku));
  // node1 = new Buku();
  // node2 = new Buku();
  // node3 = new Buku();

  // // pengisian node 1
  // node1->judul = "Matematika";
  // node1->pengarang = "Joko";
  // node1->tahunTerbit = 2000;
  // node1->next = node2;

  // // pengisian node 2
  // node2->judul = "Dia adalah Kakakku";
  // node2->pengarang = "Tere Liye";
  // node2->tahunTerbit = 2009;
  // node2->next = node3;

  // // pengisian node 3
  // node3->judul = "Kata";
  // node3->pengarang = "Tere Liye";
  // node3->tahunTerbit = 2018;
  // node3->next = NULL;

  // // menampilkan data
  // Buku *current;
  // current = node1;
  // while (current != NULL)
  // {
  //   cout << "Judul Buku : " << current->judul << endl;
  //   cout << "Pengarang Buku : " << current->pengarang << endl;
  //   cout << "Tahun Terbit Buku : " << current->tahunTerbit << endl;

  //   current = current->next;
  // }

  createSingleLinkedList("Matematika", "Joko", 2000);
  printSingleLinkedList();
  cout << "\n\n";

  addFirst("Dia adalah Kakakku", "Tere Liye", 2009);
  printSingleLinkedList();
  cout << "\n\n";

  addLast("Kata", "Tere Liye", 2018);
  printSingleLinkedList();
  cout << "\n\n";

  removeFirst();
  printSingleLinkedList();
  cout << "\n\n";

  addMiddle("Dia adalah Kakakkus", "Tere Liye", 2009, 2);
  printSingleLinkedList();
  cout << "\n\n";

  removeMiddle(0);
  printSingleLinkedList();
  cout << "\n\n";
}