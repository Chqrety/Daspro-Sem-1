#include <iostream>
using namespace std;

int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    int bilangan;
    cout << "Input Bilangan: ";
    cin >> bilangan;

    if (bilangan < 0) {
        cout << "Masukkan bilangan positif!" << endl;
    } else {
        cout << "Hasil Faktorial " << bilangan << " adalah " << faktorial(bilangan) << endl;
    }

    return 0;
}
