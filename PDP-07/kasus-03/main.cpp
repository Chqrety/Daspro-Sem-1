#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Input A: ";
    cin >> A;
    cout << "Input B: ";
    cin >> B;

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    cout << "Deret bil. Genap: ";
    for (int i = A + 1; i < B; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Deret bil. Ganjil: ";
    for (int i = A + 1; i < B; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}