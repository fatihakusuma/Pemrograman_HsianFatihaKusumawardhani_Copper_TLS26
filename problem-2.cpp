#include <iostream>
#include <string>
using namespace std;

int main() {
    string pesan;
    string hasil = "";

    cout << "Masukkan pesan (gunakan huruf kapital):" << endl;
    cin >> pesan;

    // Huruf pertama tetap
    hasil += pesan[0];

    // Proses huruf kedua sampai terakhir
    for (int i = 1; i < pesan.length(); i++) {

        int nilaiSekarang = pesan[i] - 'A' + 1;
        int nilaiSebelumnya = pesan[i - 1] - 'A' + 1;

        int nilaiBaru = nilaiSekarang + nilaiSebelumnya;

        if (nilaiBaru > 26) {
            nilaiBaru = nilaiBaru - 26;
        }

        char hurufBaru = 'A' + nilaiBaru - 1;

        hasil += hurufBaru;
    }

    cout << "Hasil konversi teks:"<< endl;
    cout << hasil << endl;

    return 0;
}
