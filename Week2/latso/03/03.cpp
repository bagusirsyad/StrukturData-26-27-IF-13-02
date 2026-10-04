#include <iostream>
#include <string>
using namespace std;

// Function untuk menghitung jumlah kemunculan karakter
int hitungKarakter(string kata, char karakter) {
    int jumlah = 0;

    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == karakter) {
            jumlah++;
        }
    }

    return jumlah;
}

int main() {
    string kata;
    char karakter;

    // Input kata dan karakter
    cin >> kata;
    cin >> karakter;

    // Memanggil function
    int hasil = hitungKarakter(kata, karakter);

    // Menampilkan hasil
    cout << hasil << endl;

    return 0;
}