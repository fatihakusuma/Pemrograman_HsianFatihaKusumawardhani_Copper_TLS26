#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;

    // Input
    cout << "Masukkan nilai N:" << endl;
    cin >> N;
    cout << "Masukkan nilai K:" << endl;
    cin >> N;

    // Membuat astronaut 1 sampai N
    vector<int> astronaut;

    for (int i = 1; i <= N; i++) {
        astronaut.push_back(i);
    }

    // Perhitungan pertama dimulai dari astronaut 1
    int current = 0;

    cout << "Urutan eliminasi: ";

    // Proses berlangsung sampai tersisa 1 astronaut
    while (astronaut.size() > 1) {

        // Mulai menghitung dari current
        int count = 1;

        // Maju sampai hitungan ke-K
        while (count < K) {
            current++;

            // Jika melewati astronaut terakhir, kembali ke astronaut pertama
            if (current >= astronaut.size()) {
                current = 0;
            }

            count++;
        }

        // Astronaut pada posisi current dieliminasi
        int eliminated = astronaut[current];

        cout << eliminated << " ";

        // Hapus astronaut tersebut
        astronaut.erase(astronaut.begin() + current);

        // Jumlah astronaut berkurang secara otomatis karena vector sudah berisi astronaut yang tersisa

        // Ubah K berdasarkan nomor astronaut yang dieliminasi
        if (eliminated % 2 == 0) {
            K = K + 2;
        }
        else {
            K = K - 1;
        }

        // K tidak boleh kurang dari 2
        if (K < 2) {
            K = 2;
        }

        // Setelah erase: current otomatis menunjuk astronaut berikutnya.
        // Jika current sudah berada di akhir vector, kembali ke posisi 0.
        if (current >= astronaut.size()) {
            current = 0;
        }
    }

    // Astronaut terakhir
    cout << endl;
    cout << "Astronaut terakhir: " << astronaut[0] << endl;

    return 0;
}