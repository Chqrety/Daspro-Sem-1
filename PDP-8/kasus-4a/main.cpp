#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Input n: ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; ++i) {
        cout << "Input ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    int positifGenap[n], negatifGenap[n], positifGanjil[n], negatifGanjil[n];
    int pg = 0, ng = 0, po = 0, no = 0;

    for (int i = 0; i < n; ++i) {
        if (array[i] > 0) {
            if (array[i] % 2 == 0) {
                positifGenap[pg++] = array[i];
            } else {
                positifGanjil[po++] = array[i];
            }
        } else if (array[i] < 0) {
            if (array[i] % 2 == 0) {
                negatifGenap[ng++] = array[i];
            } else {
                negatifGanjil[no++] = array[i];
            }
        }
    }

    cout << "Hasil Array Positif Genap: ";
    for (int i = 0; i < pg; ++i) {
        cout << positifGenap[i] << " ";
    }
    cout << endl;

    cout << "Hasil Array Negatif Genap: ";
    for (int i = 0; i < ng; ++i) {
        cout << negatifGenap[i] << " ";
    }
    cout << endl;

    cout << "Hasil Array Positif Ganjil: ";
    for (int i = 0; i < po; ++i) {
        cout << positifGanjil[i] << " ";
    }
    cout << endl;

    cout << "Hasil Array Negatif Ganjil: ";
    for (int i = 0; i < no; ++i) {
        cout << negatifGanjil[i] << " ";
    }
    cout << endl;

    return 0;
}
