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

    cout << "Hasil Array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}
