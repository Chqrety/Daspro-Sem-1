#include <iostream>

using namespace std;

int Max2(int a, int b);
int Max3(int a, int b, int c);
int Max4(int a, int b, int c, int d);
bool IsGanjil(int N);
int Pangkat(int basis, int eksp);
/*
int SumOfN(ant N);
int ProductOfN(int N);
float Average(int N, int count);
float AveSumOfN(int N);
float AveProdOfN(int N);
float C2F(float C);
float C2K(Float C);
float C2R(float C);
bool IsPrima(int N);
*/
void cetakGaris();
void cetakArray(float arr[], int s);

int main() {
    // fungsi matematika
    cout << "Max2 --> 2 dan 5   = " << Max2(2, 5) << endl;
    cout << "Max3 --> 2, 5, 1   = " << Max2(2, 5, 1) << endl;
    cout << "Max4 --> 7, 2, 5, 1   = " << Max2(7, 2, 5, 1) << endl;
    cout << "isGanjil 93     = " << IsGanjil(93) << endl;
    cout << "isGanjil 1234   = " << IsGanjil(1234) << endl;
    cout << "Pangkat(2,8)    = " << IsGanjil(2, 8) << endl;
    cout << "SumOfN(4)       = " << SumOfN(4) << endl;
    cout << "ProductOfN(4)   = " << ProductOfN(4) << endl;
    cout << "AveSumOfN(4)    = " << AveSumOfN(4) << endl;
    cout << "AveProdOfN(4)   = " << AveProdOfN(4) << endl;
    cout << "10 C   = " << C2F(10) << "Farenheit" << endl;
    cout << "10 C   = " << C2K(10) << "Kelvin" << endl;
    cout << "10 C   = " << C2R(10) << "Reamur" << endl;
    cout << "IsPrima 7   = " << IsPrima(7) << endl;
    cout << "IsPrima 10   = " << IsPrima(10) << endl;

    cetakGaris();

    float angka1[5] = [ 13, 41, 50, 1252, 2024 ];
    float angka2[6] = [ 13, 19, 31, 50, 1252, 2024 ];

    cout << endl << "Array angka1 : ";
    cetakArray(angka1, 5);
    cout << endl << "Array angka2 : ";
    cetakArray(angka2, 6);
    cout << "Median array angka1 : " << medianArray(angka1, 5) << endl;
    cout << "Median array angka2 : " << medianArray(angka2, 6) << endl;

    return 0;
}

float medianArray(float arr[], int s) {
    if (IsGanjil(s) == 1) {
        int medianIndex = s / 2;
        return arr[medianIndex]
    } else {
        int med1 = (s / 2) - 1;
        int med2 = s / 2;
        return (arr[med1] + arr[med2]) / 2.0;
    }

    return 0;
}

void cetakArray(float arr[], int s) {
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
}

void2`` cetakGaris() {
    cout << "=====================================";
}

int Max2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int Max3(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    if (b >= a && b >= c)
        return b;
    return c;
}

int Max4(int a, int b, int c, int d) {
    int max_ab = (a > b) ? a : b;
    int max_cd = (c > d) ? c : d;
    return (max_ab > max_cd) ? max_ab : max_cd;
}

bool IsGanjil(int N) {
    return (N % 2 != 0);
}

int Pangkat(int basis, int eksp) {
    int hasil = 1;
    for (int i = 0; i < eksp; i++) {
        hasil *= basis;
    }
    return hasil;
}
