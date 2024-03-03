// #include <iostream>
// using namespace std;

// int main()
// {
//   int num;
//   char ch;

//   cout << "Enter a number: ";
//   cin >> num;

//   // Membersihkan newline dari buffer
//   // cin.ignore();

//   cout << "Enter a character: ";
//   cin >> ch;

//   return 0;
// }

#include <iostream>
using namespace std;

int Deret(int n);

int main()
{
	int n;
	cout << "Selamat Datang" << endl;
	cout << "Masukkan Angka : ";
	cin >> n;
	cout << "Hasil : " << Deret(n);
}

int Deret(int n)
{
	if (n == 1)
		return (n);
	else
		return (n * Deret(n - 1));
}