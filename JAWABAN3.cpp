#include <iostream>
using namespace std;
int main() {
    int angka[100]; // array untuk menyimpan maksimal 100 angka
    int i = 0; // indeks untuk menghitung jumlah data yang masuk
    cout << "INPUT  : ";

    // membaca input angka terus-menerus sampai enter ditekan
    while (cin >> angka[i]) {
        i++; // pindah ke indeks berikutnya

        // jika karakter berikutnya adalah newline (enter), hentikan input
        if (cin.get() == '\n') break;
    }
    cout << "OUTPUT : ";
    for (int j = i - 1; j >= 0; j--) {
        cout << angka[j] << " "; // cetak dari belakang ke depan
    }
return 0;
}