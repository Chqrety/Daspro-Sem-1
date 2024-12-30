#include <iostream>

using namespace std;

int main() {
    int n, ribuan, ratusan, puluhan, satuan;
    int ribu, ratus, puluh;
    int modRibuan, modRatusan, modPuluhan;

    cout << "Masukkan angka ribuan : ";
    cin >> n;

    ribuan = n / 1000;            // mengambil angka pertama dari 4 int
    modRibuan = n % 1000;         // mengambil 3 angka terakhir
    ratusan = modRibuan / 100;    // mengambil angka pertama dari 3 int
    modRatusan = modRibuan % 100; // mengambil 2 angka terakhir
    puluhan = modRatusan / 10;    // mengambil angka pertama dari 2 int
    satuan = modRatusan % 10;     // mengambil angka terakhir dari 2 int

    ribu = n - modRibuan;
    ratus = modRibuan - modRatusan;
    puluh = modRatusan - satuan;

    cout << "hasil pecahan ribuan dari (" << n << ")" << endl;
    cout << n << " = " << ribuan << " ribuan, " << ratusan << " ratusan, " << puluhan << " puluhan, " << satuan
         << " satuan." << endl;
    cout << n << " = " << ribu << " + " << ratus << " + " << puluh << " + " << satuan << endl;

    return 0;
}