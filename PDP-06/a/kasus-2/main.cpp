#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Masukkan angka : ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Angka terkecil : 1" << endl;
    cout << "Angka terbesar : " << N << endl;

    return 0;
}