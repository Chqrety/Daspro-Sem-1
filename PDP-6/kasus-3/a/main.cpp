#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;

    if (b < a) {
        cout << "Nilai b harus lebih besar atau sama dengan a." << endl;
        return 1;
    }

    for (int i = b; i >= a; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}