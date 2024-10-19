#include <iostream>

using namespace std;

int main()
{
     // kasus 1
     cout << "========== Kasus 1 ==========" << endl
          << endl;

     float nmb;

     cout << "masukkan number : ";
     cin >> nmb;

     if (nmb < 0)
     {
          nmb = nmb * -1;
     }

     cout << "Bilangannya positif adalah " << nmb << endl;

     cout << endl
          << "=============================" << endl;

     // kasus 1 - analisis
     cout << "===== Kasus 1 - Analisis Dua Kasus =====" << endl
          << endl;

     int nmb1a;

     cout << "Masukkan number : ";
     cin >> nmb1a;

     if (nmb1a > 0)
     {
          cout << "The number is positive" << endl;
     }
     else
     {
          cout << "The number is negative" << endl;
     }

     cout << endl
          << "========================================" << endl;

     // kasus 2
     cout << "===== Kasus 2 =====" << endl
          << endl;

     cout << "3 < 4          : " << (3 < 4) << endl;
     cout << "12.5 < 7.5     : " << (12.5 < 7.5) << endl;
     cout << "5 <= 3.14      : " << (5 <= 3.14) << endl;
     cout << "3 < false      : " << (3 < false) << endl;
     cout << "True == False  : " << (true == false) << endl;
     cout << "True != False  : " << (true != false) << endl;
     cout << "65 != 'A'      : " << (65 != 'A') << endl;

     cout << endl
          << "===================" << endl;

     // kasus 2 - analisis
     cout << "===== Kasus 2 - Analisis Dua Kasus =====" << endl
          << endl;

     int nilai;

     cout << "Masukkan nilai : ";
     cin >> nilai;

     if (nilai > 60)
     {
          cout << "Selamat, ANDA Lulus" << endl;
     }
     else
     {
          cout << "Mohon maaf, Anda tidak Lulus" << endl;
     }

     cout << endl
          << "========================================" << endl;

     // kasus 3
     cout << "===== Kasus 3 =====" << endl
          << endl;

     int bilangan;

     cout << "Masukkan bilangan : ";
     cin >> bilangan;

     if (bilangan >= 10 && bilangan <= 99)
     {
          int digit1 = bilangan / 10;
          int digit2 = bilangan % 10;
          bilangan = (digit2 * 10) + digit1;
     }

     cout << "Bilangan setelah pengkondisian: " << bilangan << endl;

     cout << endl
          << "===================" << endl;

     // kasus 3 - analisis
     cout << "===== Kasus 3 - Analisis Dua Kasus =====" << endl
          << endl;

     int num1, num2;
     cout << "Masukkan angka pertama : ";
     cin >> num1;
     cout << "Masukkan angka Kedua : ";
     cin >> num2;

     cout << "Angka pertama adalah " << num1 << endl;
     cout << "Angka kedua adalah " << num2 << endl;

     if (num1 > num2)
     {
          cout << "Bilangan terbesar adalah " << num1 << endl;
     }
     else
     {
          cout << "Bilangan terbesar adalah " << num2 << endl;
     }

     cout << endl
          << "========================================" << endl;

     // kasus 4
     cout << "===== Kasus 4 =====" << endl
          << endl;

     float jamKerja;
     float upah, upahReguler, overPay = 0, totalUpah;

     cout << "Masukkan  jam kerja : ";
     cin >> jamKerja;

     cout << "Masukkan upah : ";
     cin >> upah;

     upahReguler = jamKerja * upah;

     if (jamKerja > 40)
     {
          overPay = (jamKerja - 40) * upah * 0.3;
     }

     totalUpah = upahReguler + overPay;

     cout << "Upah reguler    : " << (int)upahReguler << endl;
     cout << "Overpay         : " << (int)overPay << endl;
     cout << "Total Upah      : " << (int)totalUpah << endl;

     cout << endl
          << "===================" << endl;

     return 0;
}