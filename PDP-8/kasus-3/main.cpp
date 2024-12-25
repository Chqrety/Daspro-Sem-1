#include <iostream>

using namespace std;

int main() {
    int n, i;
    cout << "Input n: ";
    cin >> n;

    int Array[n];
    int sum = 0;
    int maxVal, minVal;

    for (i = 0; i < n; i++) {
        cout << "Input ke-" << i + 1 << ": ";
        cin >> Array[i];
        sum += Array[i];

        if (i == 0) {
            maxVal = Array[i];
            minVal = Array[i];
        } else {
            if (Array[i] > maxVal) {
                maxVal = Array[i];
            }
            if (Array[i] < minVal) {
                minVal = Array[i];
            }
        }
    }

    double average = static_cast<double>(sum) / n;

    cout << endl << "Hasil Array: ";
    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
    cout << "Nilai terbesar: " << maxVal << endl;
    cout << "Nilai terkecil: " << minVal << endl;
    cout << "Jumlah array: " << sum << endl;
    cout << "Rata-rata: " << average << endl;

    return 0;
}