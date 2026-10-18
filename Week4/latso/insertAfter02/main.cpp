
#include <iostream>
using namespace std;

typedef int infotype;
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

address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
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

address searchInfo(List L, infotype x) {
    address P = L.first;
    while (P != NULL) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != NULL) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void printInfo(List L) {
    address P = L.first;
    while (P != NULL) {
        cout << P->info;
        if (P->next != NULL) {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << endl;
}

int main() {
    List L;
    int N, x, dataBaru;

    createList(L);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    int dicari;
    cin >> dicari;
    cin >> dataBaru;

    address Prec = searchInfo(L, dicari);

    if (Prec != NULL) {
        insertAfter(L, Prec, alokasi(dataBaru));
    }

    printInfo(L);

    return 0;
}