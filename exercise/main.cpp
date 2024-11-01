#include <iostream>

using namespace std;

int main() {

    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl << "PDP 7a Kasus 1" << endl;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}