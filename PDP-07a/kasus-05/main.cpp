#include <iostream>
using namespace std;

int main() {
    int panjang, lebar;

    cout << "Masukkan panjang tabel: ";
    cin >> panjang;
    cout << "Masukkan lebar tabel: ";
    cin >> lebar;

    for (int i = 1; i <= panjang; i++) {
        for (int j = 1; j <= lebar; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
