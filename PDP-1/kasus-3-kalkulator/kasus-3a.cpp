#include <iostream>

using namespace std;

int main() {
    float a, b;
    float kecil, besar, sama, beda;

    cout << "Masukkan bilangan A: ";
    cin >> a;
    cout << "Masukkan bilangan B: ";
    cin >> b;

    kecil = a < b;
    besar = a > b;
    sama = a == b;
    beda = a != b;

    // output
    cout << "Hasil operasi:" << endl;
    cout << a << " < " << b << " = " << kecil << endl;
    cout << a << " > " << b << " = " << besar << endl;
    cout << a << " = " << b << " = " << sama << endl;
    cout << a << " != " << b << " = " << beda << endl;

    return 0;
}