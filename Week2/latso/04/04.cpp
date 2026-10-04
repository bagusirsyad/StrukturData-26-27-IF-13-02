#include <iostream>
using namespace std;

// Procedure untuk menukar dan mengalikan nilai
void tukarDanKali(int &x, int &y) {
    // Menukar nilai x dan y
    int temp = x;
    x = y;
    y = temp;

    // Mengalikan masing-masing dengan 10
    x = x * 10;
    y = y * 10;
}

int main() {
    int x, y;

    // Input
    cin >> x >> y;

    // Memanggil procedure
    tukarDanKali(x, y);

    // Output
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}