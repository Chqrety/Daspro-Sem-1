#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Input ukuran array
    cout << "Input n: ";
    cin >> n;

    vector<int> array(n);

    // Input elemen array
    for (int i = 0; i < n; ++i) {
        cout << "Input ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    // Output hasil array
    cout << "Hasil Array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Output array terbalik
    cout << "Reverse Array: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
