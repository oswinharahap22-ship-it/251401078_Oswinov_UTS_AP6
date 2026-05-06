#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "INPUT  : ";

    cin >> a >> b; // mengambil dua angka dari user

    // proses mencari FPB
    while (b != 0) {
        int temp = b; // menyimpan nilai b sementara
        b = a % b; // menghitung sisa bagi a dengan b
        a = temp; // memindahkan nilai lama b ke a
    }
    cout << "OUTPUT : " << a;
return 0;
}