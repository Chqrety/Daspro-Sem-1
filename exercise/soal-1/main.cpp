#include <iostream>
using namespace std;

int main() {
    char jurusan;
    int gelombang;
    int uangGedung = 0, uangDibayarkan = 0, uangBayar, kembalian;

    cout << "Masukkan jurusan (T/M): ";
    cin >> jurusan;

    cout << "Masukkan gelombang PMDK (1/2/3): ";
    cin >> gelombang;

    // Tentukan uang gedung berdasarkan jurusan
    if (jurusan == 'T' || jurusan == 't') {
        uangGedung = 26000000; // Teknik Informatika
    } else if (jurusan == 'M' || jurusan == 'm') {
        uangGedung = 20000000; // Manajemen
    } else {
        cout << "Input jurusan salah!" << endl;
        return 0;
    }

    // Validasi gelombang dan hitung uang yang harus dibayarkan
    if (gelombang == 1) {
        uangDibayarkan = uangGedung * (jurusan == 'T' || jurusan == 't' ? 0.9 : 0.5); // 30% atau 50% potongan
    } else if (gelombang == 2) {
        uangDibayarkan = uangGedung * (jurusan == 'T' || jurusan == 't' ? 0.8 : 0.7); // 20% atau 30% potongan
    } else if (gelombang == 3) {
        uangDibayarkan = uangGedung * (jurusan == 'T' || jurusan == 't' ? 0.9 : 0.8); // 10% atau 20% potongan
    } else {
        cout << "Input gelombang salah!" << endl;
        return 0;
    }

    // Tampilkan hasil perhitungan uang yang harus dibayarkan
    cout << "Uang Gedung: Rp " << uangGedung << endl;
    cout << "Uang yang harus dibayarkan: Rp " << uangDibayarkan << endl;

    // Memasukkan uang yang dibayarkan oleh pengguna
    cout << "Masukkan uang yang dibayarkan: Rp ";
    cin >> uangBayar;

    // Hitung kembalian
    kembalian = uangBayar - uangDibayarkan;

    // Output hasil
    if (kembalian >= 0) {
        cout << "Kembalian: Rp " << kembalian << endl;
    } else {
        cout << "Uang kurang sebesar: Rp " << -kembalian << endl;
    }

    return 0;
}