#include <iostream>

using namespace std;

int main() {

    int sum = 0, number;

    for (int i = 1; i <= 5; i++) {
        cout << "Input bilangan ke-" << i << ": ";
        cin >> number;
        sum += number;
    }

    cout << "Hasil Penjumlahan: " << sum << endl;

    return 0;
}