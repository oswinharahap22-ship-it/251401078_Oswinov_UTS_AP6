#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "INPUT  : ";
    cin >> n;
    int jumlah = 0; // menyimpan hasil total perhitungan
    int digitCount = 0; // menyimpan jumlah digit

    // menghitung jumlah digit pada angka
    for (int temp = n; temp > 0; temp /= 10) {
        digitCount++;
    }
    string perhitungan = ""; // menyimpan bentuk perhitungan (misal: 1*1*1 + 5*5*5)

    // mengambil tiap digit dan menghitung pangkatnya
    for (int temp = n; temp > 0; temp /= 10) {
        int d = temp % 10; // mengambil digit terakhir

    int hasil = 1;
    // mengambil tiap digit dan menghitung pangkatnya
    for (int i = 0; i < digitCount; i++) {
        hasil *= d;
    }
    jumlah += hasil; // menambahkan ke total

    // membuat string perhitungan (misal: 1*1*1)
    string bagian = "";
    for (int i = 0; i < digitCount; i++) {
        bagian += char('0' + d); // mengubah digit ke karakter
        if (i < digitCount - 1) bagian += "*";
    }
    // menggabungkan ke string utama
    perhitungan = bagian + (perhitungan.empty() ? "" : " + ") + perhitungan;
    }
    cout << "OUTPUT : ";
    if (jumlah == n)
        cout << "YES, " << n << " is an Armstrong Number\n";
    else
        cout << "NO, " << n << " is not an Armstrong Number\n";
    cout << "         " << perhitungan << " = " << jumlah << endl;
return 0;
}