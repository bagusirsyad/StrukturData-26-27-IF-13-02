#include <iostream>
using namespace std;

int main() {

    // =======================================
    // 1. ARRAY 1 DIMENSI
    // =======================================

    int nilai1D[3] = {80, 85, 90};

    cout << "=== ARRAY 1 DIMENSI ===" << endl;

    cout << "Nilai pertama : " << nilai1D[0] << endl;
    cout << "Nilai kedua   : " << nilai1D[1] << endl;
    cout << "Nilai ketiga  : " << nilai1D[2] << endl;


    // =======================================
    // 2. ARRAY 2 DIMENSI
    // =======================================

    int nilai2D[2][3] = {
        {80, 85, 90},
        {75, 88, 92}
    };

    cout << endl;
    cout << "=== ARRAY 2 DIMENSI ===" << endl;

    cout << "Baris 0, Kolom 0 : " << nilai2D[0][0] << endl;
    cout << "Baris 0, Kolom 1 : " << nilai2D[0][1] << endl;
    cout << "Baris 1, Kolom 2 : " << nilai2D[1][2] << endl;


    // =======================================
    // 3. ARRAY 3 DIMENSI
    // =======================================

    int nilai3D[2][2][2] = {
        {
            {80, 85},
            {75, 90}
        },
        {
            {70, 88},
            {95, 82}
        }
    };

    cout << endl;
    cout << "=== ARRAY 3 DIMENSI ===" << endl;

    cout << "Blok 0, Baris 0, Kolom 0 : " << nilai3D[0][0][0] << endl;
    cout << "Blok 0, Baris 1, Kolom 1 : " << nilai3D[0][1][1] << endl;
    cout << "Blok 1, Baris 0, Kolom 1 : " << nilai3D[1][0][1] << endl;
    cout << "Blok 1, Baris 1, Kolom 0 : " << nilai3D[1][1][0] << endl;


    // =======================================
    // 4. MENCETAK SEMUA ELEMEN DENGAN LOOP
    // =======================================

    cout << endl;
    cout << "=== SEMUA ELEMEN (LOOP) ===" << endl;

    cout << "Array 1D : ";
    for (int i = 0; i < 3; i++) {
        cout << nilai1D[i] << " ";
    }
    cout << endl;

    cout << "Array 2D :" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nilai2D[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array 3D :" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << nilai3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}