#include <iostream>

using namespace std;

int main()
{
    float a, b;
    float tambah, kurang, kali, bagi;

    cout << "Masukkan bilangan A: ";
    cin >> a;
    cout << "Masukkan bilangan B: ";
    cin >> b;

    tambah = a + b;
    kurang = a - b;
    kali = a * b;
    bagi = a / b;

    // output
    cout << "Hasil operasi:" << endl;
    cout << a << " + " << b << " = " << tambah << endl;
    cout << a << " - " << b << " = " << kurang << endl;
    cout << a << " * " << b << " = " << kali << endl;
    cout << a << " / " << b << " = " << bagi << endl;

    return 0;
}