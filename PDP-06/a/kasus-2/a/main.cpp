#include <iostream>

using namespace std;

int main() {

    int bilangan[5];
    double min, max, sum, average;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan bilangan ke-" << (i + 1) << ": ";
        cin >> bilangan[i];
    }

    min = max = bilangan[0];

    for (int i = 0; i < 5; i++) {
        // mencari min
        if (bilangan[i] < min) {
            min = bilangan[i];
        }

        // mencari max
        if (bilangan[i] > max) {
            max = bilangan[i];
        }

        // mencari sum
        sum += bilangan[i];
    }

    average = sum / 5;

    cout << "Bilangan terkecil: " << min << endl;
    cout << "Bilangan terbesar: " << max << endl;
    cout << "Hasil Penjumlahan: " << sum << endl;
    cout << "Rata-rata: " << average << endl;

    return 0;
}