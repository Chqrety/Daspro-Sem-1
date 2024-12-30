#include <iostream>

using namespace std;

int main() {
    int a, b, c, y1, y2, x;
    float a1, a2, a3, a4, a5, jml, rata2;
    float F, C, K, R;

    cout << "========== PDP 2 Kasus 3 Nomor 1 ==========" << endl << endl;

    cout << "Masukkan bilangan a: ";
    cin >> a;
    y1 = (a * a * a) + 7;
    cout << "Hasil dari y = a^3 + 7 = " << y1 << endl;
    cout << "Hasil dari y = " << a << "^" << 3 << " + 7 = " << y1 << endl;

    cout << "========== PDP 2 Kasus 3 Nomor 2 ==========" << endl << endl;

    cout << "Masukkan angka x: ";
    cin >> x;
    cout << "Masukkan angka b: ";
    cin >> b;
    cout << "Masukkan angka c: ";
    cin >> c;
    y2 = (a * (x * x)) + (b * x) + c;
    cout << "Hasil dari y = ax^2 + bx + c = " << y2 << endl;
    cout << "Hasil dari y =" << a << "." << x << "^2 + " << b << "." << x << " + " << c << " = " << y2 << endl;

    cout << "========== PDP 2 Kasus 3 Nomor 3 ==========" << endl << endl;
    cout << "Masukkan angka ke-1: ";
    cin >> a1;
    cout << "Masukkan angka ke-2: ";
    cin >> a2;
    cout << "Masukkan angka ke-3: ";
    cin >> a3;
    cout << "Masukkan angka ke-4: ";
    cin >> a4;
    cout << "Masukkan angka ke-5: ";
    cin >> a5;
    jml = a1 + a2 + a3 + a4 + a5;
    rata2 = jml / 5.00;
    cout << "Jumlah = " << jml << endl;
    cout << "Rata-rata = " << rata2 << endl;

    cout << "========== PDP 2 Kasus 3 Nomor 4 ==========" << endl << endl;
    cout << "Masukkan suhu dalam Celcius = ";
    cin >> C;
    // jika diperlukan harus memasukkan bilangan berkoma
    F = ((9.0 / 5.0) * C) + 32;
    K = C + 273;
    R = (4.0 / 5.0) * C;
    cout << C << " Celcius = " << F << " Farenheit" << endl;
    cout << C << " Celcius = " << K << " Kelvin" << endl;
    cout << C << " Celcius = " << R << " Reamur" << endl;

    return 0;
}
