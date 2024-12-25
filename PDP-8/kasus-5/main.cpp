#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Input n: ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            array[i] = 0;
        } else {
            array[i] = 1;
        }
    }

    cout << "Hasil Array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
