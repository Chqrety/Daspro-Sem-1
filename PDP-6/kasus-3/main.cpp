#include <iostream>

using namespace std;

int main() {

    int N;

    cout << "Masukkan bilangan : ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i == 2) {
            cout << 2 * 2 << " ";
        } else {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}