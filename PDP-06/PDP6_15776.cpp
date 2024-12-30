#include <iostream>

using namespace std;

int main() {
    // PDP 6
    // Kasus 1 – Perulangan atau Looping
    cout << "========== PDP 6 - Kasus 1 ==========" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Hello World" << endl;
    }
    cout << "=====================================" << endl << endl;

    // Kasus 2 – Deret Angka
    cout << "========== PDP 6 - Kasus 2 ==========" << endl;
    cout << "Deret 0 hingga 9: ";
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Deret 1 hingga 10: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "=====================================" << endl << endl;

    // Kasus 2a – Modifikasi Deret Angka
    cout << "========== PDP 6 - Kasus 2a ==========" << endl;
    int a, N;

    cout << "Input N: ";
    cin >> N;
    cout << "Input a: ";
    cin >> a;

    if (a > N) {
        cout << "Nilai a harus lebih kecil atau sama dengan N." << endl;
        return 1;
    }

    for (int i = a; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "======================================" << endl << endl;

    // Kasus 3 – Deret Angka - Menurun
    cout << "========== PDP 6 - Kasus 3 ==========" << endl;
    cout << "Deret 10 hingga 0: ";
    for (int i = 10; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Deret 9 hingga 1: ";
    for (int i = 9; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
    cout << "=====================================" << endl << endl;

    // Kasus 3a – Modifikasi Deret Angka - Menurun
    cout << "========== PDP 6 - Kasus 3a ==========" << endl;
    int a3, b;

    cout << "Input a: ";
    cin >> a3;
    cout << "Input b: ";
    cin >> b;

    if (b < a3) {
        cout << "Nilai b harus lebih besar atau sama dengan a." << endl;
        return 1;
    }

    for (int i = b; i >= a3; i--) {
        cout << i << " ";
    }
    cout << endl;
    cout << "======================================" << endl << endl;

    // Kasus 4 – Modifikasi Program
    cout << "========== PDP 6 - Kasus 4 ==========" << endl;
    int a4, b4, increment;

    cout << "Input a: ";
    cin >> a4;
    cout << "Input b: ";
    cin >> b4;
    cout << "Input increment value: ";
    cin >> increment;

    if (increment <= 0) {
        cout << "Increment value harus lebih besar dari 0." << endl;
        return 1;
    }

    if (a4 <= b4) {
        cout << "Deret naik: ";
        for (int i = a4; i <= b4; i += increment) {
            cout << i << " ";
        }
    } else {
        cout << "Deret turun: ";
        for (int i = a4; i >= b4; i -= increment) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "=====================================" << endl << endl;

    // Kasus 1 – Penjumlahan Deret
    cout << "========== PDP 6a - Kasus 1 ==========" << endl;
    int sum = 0;

    cout << "Deret: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
        sum += i;
    }

    cout << endl;
    cout << "Hasil Penjumlahan: " << sum << endl;
    cout << "======================================" << endl << endl;

    // Kasus 1a – Penjumlahan Deret versi 2
    cout << "========== PDP 6a - Kasus 1a ==========" << endl;
    int sum1a = 0, number;

    for (int i = 1; i <= 5; i++) {
        cout << "Input bilangan ke-" << i << ": ";
        cin >> number;
        sum1a += number;
    }

    cout << "Hasil Penjumlahan: " << sum1a << endl;
    cout << "=======================================" << endl << endl;

    // kasus 2 - terbesar dan terkecil
    cout << "========== PDP 6a - Kasus 2 ==========" << endl;
    int x;

    cout << "Masukkan angka : ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Angka terkecil : 1" << endl;
    cout << "Angka terbesar : " << x << endl;

    cout << "======================================" << endl << endl;

    // kasus 2a - Modifikasi kasus 2
    cout << "========== PDP 6a - Kasus 2a ==========" << endl;
    int bilangan[5];
    double min, max, sum2a, average;

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
        sum2a += bilangan[i];
    }

    average = sum2a / 5;

    cout << "Bilangan terkecil: " << min << endl;
    cout << "Bilangan terbesar: " << max << endl;
    cout << "Hasil Penjumlahan: " << sum2a << endl;
    cout << "Rata-rata: " << average << endl;

    cout << "=======================================" << endl << endl;

    // kasus 3 - Modifikasi deret
    cout << "========== PDP 6a - Kasus 3 ==========" << endl;
    int y;

    cout << "Masukkan bilangan : ";
    cin >> y;

    for (int i = 1; i <= y; i++) {
        if (i == 2) {
            cout << 2 * 2 << " ";
        } else {
            cout << i << " ";
        }
    }

    cout << endl;

    cout << "======================================" << endl << endl;

    return 0;
}