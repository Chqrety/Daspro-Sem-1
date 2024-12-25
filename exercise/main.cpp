#include <iostream>
#include <math.h>

using namespace std;

struct nilai {
    int x;
    int y;
};

struct koordinat {
    int x;
    int y;
};

typedef struct koordinat titik;

int main() {

    titik A, B;
    A.x = 1;
    A.y = 1;
    B.x = 4;
    B.y = 5;
    cout << "Titik A (" << A.x << ", " << A.y << ")" << endl;
    cout << "Titik B (" << B.x << ", " << B.y << ")" << endl;
    int jarak = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
    cout << jarak << endl;

    struct nilai angka1;
    struct nilai angka2;
    angka1.x = 10;
    angka1.y = 20;

    int jumlah1 = angka1.x + angka1.y;
    cout << angka1.x << " + " << angka1.y << " = " << jumlah1 << endl;

    return 0;
}