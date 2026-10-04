#include <iostream>
using namespace std;

int main() {
    int N;

    // Input jumlah mahasiswa
    cin >> N;

    int nilai[N];
    int total = 0;

    // Input nilai mahasiswa
    for (int i = 0; i < N; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    // Menghitung rata-rata
    int rataRata = total / N;

    // Menghitung jumlah nilai di atas rata-rata
    int diAtasRataRata = 0;

    for (int i = 0; i < N; i++) {
        if (nilai[i] > rataRata) {
            diAtasRataRata++;
        }
    }

    // Menampilkan hasil
    cout << "Rata-rata: " << rataRata << endl;
    cout << "Di atas rata-rata: " << diAtasRataRata << endl;

    return 0;
}