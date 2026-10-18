
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    int tahunTerbit;
};

typedef Buku infotype;
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

address alokasi(infotype data) {
    address P = new elmlist;
    P->info = data;
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

void deleteLast(List &L) {
    if (L.first == NULL) {
        return;
    }

    address P;

    if (L.first->next == NULL) {
        P = L.first;
        L.first = NULL;
        delete P;
    } else {
        address Q = L.first;

        while (Q->next->next != NULL) {
            Q = Q->next;
        }

        P = Q->next;
        Q->next = NULL;
        delete P;
    }
}

void printInfo(List L) {
    address P = L.first;

    cout << "Daftar Buku:" << endl;

    while (P != NULL) {
        cout << P->info.judul
             << " (" << P->info.tahunTerbit << ")" << endl;
        P = P->next;
    }
}

int main() {
    List L;
    int N;

    createList(L);
    cin >> N;

    for (int i = 0; i < N; i++) {
        infotype data;

        cin >> ws;
        getline(cin, data.judul);
        cin >> data.tahunTerbit;

        insertLast(L, alokasi(data));
    }

    deleteLast(L);
    printInfo(L);

    while (L.first != NULL) {
        deleteLast(L);
    }

    return 0;
}
