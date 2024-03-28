// #include <iostream>
// using namespace std;

// char huruf[15] = {'A', 'B', 'E', 'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'D', 'E', 'A', 'A'}; // A = 5, B = 3, C = 2, D = 2, E = 3
// int a = 0, b = 0, c = 0, d = 0, e = 0;

// int main() {
//   for(int i = 0; i < 15; i++) {
//     if(huruf[i] == 'A') {
//       a++;
//     } else if(huruf[i] == 'B') {
//       b++;
//     } else if(huruf[i] == 'C') {
//       c++;
//     } else if(huruf[i] == 'D') {
//       d++;
//     } else if(huruf[i] == 'E') {
//       e++;
//     } 
//   }

//   if(a > b && a > c && a > d && a > e) {
//     cout << a;
//   } else if(b > a && b > c && b > d && b > e) {
//     cout << b;
//   } else if(c > a && c > b && c > d && c > e) {
//     cout << c;
//   } else if(d > a && d > b && d > c && d > e) {
//     cout << d;
//   } else if(e > a && e > b && e > c && e > d) {
//     cout << e;
//   } 

//   cout << "..................." << endl;
//   cout << a << endl;
//   cout << b << endl;
//   cout << c << endl;
//   cout << d << endl;
//   cout << e << endl;
// }

// #include <iostream>
// using namespace std;

// int a, b;
// int pangkat(int a, int b) {
//   if(b == 0) {
//     return 1;
//   } else if(b == 1) {
//     return a;
//   } else {
//     return a * pangkat(a, b - 1);
//   }
// }

// int main() {
//   cout << "Masukkan a : ";
//   cin >> a;
//   cout << "Masukkan b : ";
//   cin >> b;

//   cout << pangkat(a, b);
// }