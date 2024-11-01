#include <iostream>
using namespace std;

int main() {
    int n = 5; // Jumlah baris segitiga

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Pindah ke baris berikutnya
    }

    return 0;
}
