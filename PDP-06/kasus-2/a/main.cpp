#include <iostream>

using namespace std;

int main() {

    int a, N;

    cout << "Input N: ";
    cin >> N;
    cout << "Input a: ";
    cin >> a;

    if (a > N) {
        cout << "Nilai a harus lebih kecil atau sama dengan N." << endl;
        return 1;
    }

    for (int i = a; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}