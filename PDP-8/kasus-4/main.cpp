#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Input n: ";
    cin >> n;

    int Array[n];

    for (int i = 0; i < n; i++) {
        cout << "Input ke-" << i + 1 << ": ";
        cin >> Array[i];
    }

    cout << "Hasil Array Genap: ";
    for (int i = 0; i < n; i++) {
        if (Array[i] % 2 == 0) {
            cout << Array[i] << " ";
        }
    }
    cout << endl;

    cout << "Hasil Array Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (Array[i] % 2 != 0) {
            cout << Array[i] << " ";
        }
    }
    cout << endl;

    return 0;
}