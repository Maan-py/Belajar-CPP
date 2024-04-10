#include <iostream>
using namespace std;

int i = 1;
int angka, bilangan;
char ulangi = 'y';

struct Bilangan {
  int angka;
  Bilangan *next;
};

Bilangan *head, *tail, *current, *newNode, *del;

void createSingleLinkedList(int angka) {
  head = new Bilangan();

  head->angka = angka;
  head->next = NULL;

  tail = head;
}

void addLast(int angka) {
  newNode = new Bilangan();
  newNode->angka = angka;  

  tail->next = newNode;
  tail = newNode;
}

void removeLast() {
  current = head;
  while(current->next != tail) {
    current = current->next;
  }
  del = tail;
  tail = current;
  tail->next = NULL;
  delete del;
}

void printLinkedList() {
  current = head;
  while(current != NULL) {
    cout << "Angka " << i << " : " << current->angka << endl;
    current = current->next;
    i++;
  }
}

int main() {
  do {
    cout << "Masukkan menu : ";
    cin >> angka;

    switch(angka) {
      case 1:
        createSingleLinkedList(10);
        break;
      case 2:
        cout << "Masukkan angka : ";
        cin >> bilangan;
        addLast(bilangan);
        break;
      case 3:
        removeLast();
        break;
      case 4:
        printLinkedList();
        break;
    }
    cout << "Ulangi? (1/0) : ";
    cin >> ulangi;
  } while(ulangi == 'y');
}