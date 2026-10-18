
#include <iostream>
#include <string>
using namespace std;

typedef string infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L) {
    L.first = NULL;
}

address alokasi(infotype nama) {
    address P = new elmlist;
    P->info = nama;
    P->next = NULL;
    return P;
}

void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != NULL) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void deleteFirst(List &L, address &P) {
    if (L.first != NULL) {
        P = L.first;
        L.first = L.first->next;
        P->next = NULL;
    }
}

void printInfo(List L) {
    address P = L.first;
    cout << "Antrean: ";

    if (P == NULL) {
        cout << "(kosong)";
    } else {
        while (P != NULL) {
            cout << P->info;
            if (P->next != NULL) {
                cout << " -> ";
            }
            P = P->next;
        }
    }
    cout << endl;
}

int main() {
    List L;
    address P;
    string nama;
    int pilihan;

    createList(L);

    do {
        cout << "\n=== MENU ANTREAN BANK ===" << endl;
        cout << "1. Tambah nasabah" << endl;
        cout << "2. Layani nasabah" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan nama nasabah: ";
            getline(cin >> ws, nama);

            P = alokasi(nama);
            insertLast(L, P);
            printInfo(L);

        } else if (pilihan == 2) {
            if (L.first == NULL) {
                cout << "Antrean kosong, tidak ada nasabah yang dilayani."
                     << endl;
            } else {
                deleteFirst(L, P);
                cout << "Melayani: " << P->info << endl;
                delete P;
                printInfo(L);
            }

        } else if (pilihan == 3) {
            cout << "Program selesai." << endl;

        } else {
            cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 3);

    while (L.first != NULL) {
        deleteFirst(L, P);
        delete P;
    }

    return 0;
}
