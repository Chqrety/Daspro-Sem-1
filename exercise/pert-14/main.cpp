#include <iostream>
using namespace std;

struct umr {
    string kab_kota;
    int gaji;
};

int kurangRec(int a, int b);
int maxRec(int arr[], int n);
string maxGaji(umr arr[], int n);

int main() {
    cout << "9 - 4 = " << kurangRec(9, 4) << endl;

    int arr[] = {2, 3, 5, 7, 9};
    cout << "Nilai max = " << maxRec(arr, 5) << endl;

    umr jateng[3];
    jateng[0].kab_kota = "Surakarta";
    jateng[0].gaji = 22695370;
    jateng[1].kab_kota = "Semarang";
    jateng[1].gaji = 32434369;
    // jateng[2].kab_kota = "Banjarnegara";
    // jateng[2].gaji = 32254369;
    cout << "Gaji tertinggi di Jawa Tengah adalah di " << maxGaji(jateng, 3) << endl;

    return 0;
}

int kurangRec(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return kurangRec(a - 1, b - 1);
    }
}

int maxRec(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        return max(arr[n - 1], maxRec(arr, n - 1));
    }
}

int maxGaji(umr arr[], int n) {
    if (n == 1) {
        return arr[0].gaji;
    }

    return max(arr[n - 1].gaji, maxGaji(arr, n - 1));
}