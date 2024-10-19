#include <iostream>

using namespace std;

int main() {
    // contoh 1
    // int x;

    // cout << "Masukkan angka = ";
    // cin >> x;

    // if (x < 0)
    // {
    //   x = x * -1;
    // }

    // cout << "Angka absolutnya = " << x << endl;

    // // contoh 2
    // float nilai;

    // cout << "Masukkan nilai = ";
    // cin >> nilai;
    // if (nilai < 60)
    // {
    //   cout << "Tidak Lulus" << endl;
    // }
    // else
    // {
    //   cout << "Lulus" << endl;
    // }

    // contoh 3
    float nilai;
    cout << "Masukkan nilai = ";
    cin >> nilai;

    if ((nilai >= 0) && (nilai < 60)) {
        cout << "Tidak Lulus" << endl;
    } else if ((nilai >= 60) && (nilai <= 100)) {
        cout << "Lulus" << endl;
    } else {
        cout << "Inputan Salah" << endl;
    }

    return 0;
};