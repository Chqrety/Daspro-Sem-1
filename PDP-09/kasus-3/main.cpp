#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Masukkan jumlah baris: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom: ";
    cin >> cols;

    int array[rows][cols], transpose[cols][rows];

    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = array[i][j];
        }
    }

    cout << "Hasil Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hasil Matrix Transpose:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
