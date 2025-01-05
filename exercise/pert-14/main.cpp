#include <iostream>
using namespace std;

struct umr {
    string kab_kota;
    string gaji;
};

int kurangRec(int a, int b);
int maxRec(float arr[], int n);

int main() {

    cout << "9 - 4 = " << kurangRec(9, 4) << endl;
    float angka[5] = {78.2, 85, 5, 98, 3};
    cout << "nilai max = " << maxRec(angka) << endl;

    umr jateng[3];
    jateng[0].kab_kota = "Surakarta";
    jateng[0].gaji = "226970";
    jateng[1].kab_kota = "Semarang";
    jateng[1].gaji = "32434369";
    jateng[0].kab_kota = "Banjarnegara";
    jateng[0].gaji = "2038005";
    cout << "Gaji tertinggi = Rp " << maxRec(jateng, 3) << ",-" << endl;

    return 0;
}

int kurangRec(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return kurangRec(a - 1, b - 1);
    }
}

int maxRec(float arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        return max(arr[n - 1], maxRec(arr, n - 1));
    }
}