#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan antara 50 - 101 yang habis dibagi 5 atau 7: ";
    for (int i = 50; i <= 101; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
