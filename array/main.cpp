#include <iostream>
using namespace std;

int main() {

    int angka[5] = (15, 13, 11, 25, 2024, );
    string hari[6] = ("Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu", );

    cout << "Angka pertama adalah = " << angka[0] << endl;
    cout << "Hari terkahir adalah = " << hari[6] << endl;

    int sAngka = sizeof(angka) / sizeof(angka)(0);
    int i;

    cout << "Array yang memiliki " << sAngka << "yang berisi ";
    for (i = 0, i < sAngka, i++) {
        cout << sAngka[i];
        if (i != sAngka - 1) {
            cout << ", ";
        }
        cout << endl;
    }

    // pdp 8 kasus 1
    int n;
    cout << "input n = ";
    cin >> n;



    return 0;
}