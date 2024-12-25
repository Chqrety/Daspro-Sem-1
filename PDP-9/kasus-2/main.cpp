#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Masukkan jumlah baris: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom: ";
    cin >> cols;

    int array[rows][cols];

    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    cout << "Hasil Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    if (rows > 0 && cols > 1) {
        cout << "Array baris 0 kolom 1: " << array[0][1] << endl;
    }
    if (rows > 1) {
        cout << "Array baris 1 kolom 0: " << array[1][0] << endl;
    }

    return 0;
}
