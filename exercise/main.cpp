#include <iostream>

using namespace std;

int main() {

    int i;

    cout << "Loop for 1-5 = ";

    for (i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Loop for 10-1 = ";

    for (i = 10; i > 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Loop while 1-5 = ";
    i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    cout << "Loop while 1 - 100 jeda 2 = ";
    i = 1;
    while (i <= 100) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;

    cout << "Loop do while 1-5 = ";
    i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;

    return 0;
}