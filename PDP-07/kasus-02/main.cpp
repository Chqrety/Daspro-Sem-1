#include <iostream>
using namespace std;

int main() {
    int bilangan[6];
    int min, max;

    // Meminta pengguna memasukkan 6 bilangan
    cout << "Masukkan 6 bilangan integer:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Bilangan " << i + 1 << ": ";
        cin >> bilangan[i];
    }

    // Inisialisasi nilai min dan max
    min = bilangan[0];
    max = bilangan[0];

    // Mencari nilai terkecil dan terbesar
    for (int i = 1; i < 6; i++) {
        if (bilangan[i] < min) {
            min = bilangan[i];
        }
        if (bilangan[i] > max) {
            max = bilangan[i];
        }
    }

    // Menampilkan hasil
    cout << "Nilai terkecil adalah: " << min << endl;
    cout << "Nilai terbesar adalah: " << max << endl;

    return 0;
}