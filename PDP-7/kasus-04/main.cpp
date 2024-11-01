#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan kelipatan 5 antara 1 - 50: ";
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
