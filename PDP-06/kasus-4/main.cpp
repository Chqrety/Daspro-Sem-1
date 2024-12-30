#include <iostream>

using namespace std;

int main() {

    int a, b, increment;

    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input increment value: ";
    cin >> increment;

    if (increment <= 0) {
        cout << "Increment value harus lebih besar dari 0." << endl;
        return 1;
    }

    if (a <= b) {
        cout << "Deret naik: ";
        for (int i = a; i <= b; i += increment) {
            cout << i << " ";
        }
    } else {
        cout << "Deret turun: ";
        for (int i = a; i >= b; i -= increment) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}