#include <iostream>
using namespace std;

// Ini adalah FUNGSI (punya return value, yaitu int)
int maks3(int a, int b, int c) {
    int maks = a;

    if (b > maks) {
        maks = b;
    }
    if (c > maks) {
        maks = c;
    }

    return maks;
}

// Ini adalah PROSEDUR (pakai void, tidak punya return value)
void tulis(int x) {
    for (int i = 0 ; i < x ; i++) {
        cout << "baris ke-" << i + 1 << endl ;
    }
}

int main() {
    // Mangil fungsi, nilainya bisa disimpan ke variabel
    int hasil_maks = maks3(10, 50, 30) ;
    cout << "Nilai maksimumnya adalah = " << hasil_maks << endl ;

    // Manggil prosedur, dia langsung jalanin tugasnya aja
    cout << "Mulai panggil prosedur: " << endl ;
    tulis(3) ;

    return 0 ;
}