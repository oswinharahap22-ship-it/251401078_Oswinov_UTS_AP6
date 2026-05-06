#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1, c = 0;
    // n = jumlah iterasi (berapa langkah Fibonacci)
    // a = nilai fibonacci saat ini (awal: 0)
    // b = nilai fibonacci berikutnya (awal: 1)
    // c = variabel untuk menyimpan hasil penjumlahan

    cout << "INPUT  : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        c = a + b; // menjumlahkan dua bilangan sebelumnya
        a = b; // geser nilai a menjadi b
        b = c; // b menjadi hasil penjumlahan (c)
    }
    cout << "OUTPUT : " << a;
return 0;
}