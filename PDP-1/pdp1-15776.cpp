#include <iostream>

using namespace std;

int main()
{
     // kasus 1
     cout << "================ Kasus 1 ================" << endl;
     cout << "Nama Saya Husnul Fikri Averus\n";
     cout << "Jurusan: Teknik Informatika\n";
     cout << "Universitas: Universitas Dian Nuswantoro\n";
     cout << "================ ======= ================" << endl
          << endl;

     // kasus 2
     cout << "===== Kasus 2 =====" << endl;
     cout << "nama saya Mawar" << endl;
     cout << "Saya dari Semarang" << endl;
     cout << "Kuliah di Udinus" << endl;
     cout << "===== ======= =====" << endl
          << endl;

     // kasus 3
     string nama, jurusan, universitas;
     cout << "===================== Kasus 3 =====================" << endl;

     cout << "Masukkan nama = ";
     getline(cin, nama);

     cout << "Masukkan jurusan = ";
     getline(cin, jurusan);

     cout << "Masukkan universitas = ";
     getline(cin, universitas);

     // output
     cout << "nama saya: " << nama << endl;
     cout << "Jurusan: " << jurusan << endl;
     cout << "Universitas: " << universitas << endl;

     cout << "===================== ======= =====================" << endl
          << endl;

     // kasus 3 kalkulator
     float a3, b3;
     float tambah, kurang, kali, bagi;
     cout << "=== Kasus 3 Kalkulator ===" << endl;

     cout << "Masukkan bilangan A: ";
     cin >> a3;
     cout << "Masukkan bilangan B: ";
     cin >> b3;

     tambah = a3 + b3;
     kurang = a3 - b3;
     kali = a3 * b3;
     bagi = a3 / b3;

     // output
     cout << "Hasil operasi:" << endl;
     cout << a3 << " + " << b3 << " = " << tambah << endl;
     cout << a3 << " - " << b3 << " = " << kurang << endl;
     cout << a3 << " * " << b3 << " = " << kali << endl;
     cout << a3 << " / " << b3 << " = " << bagi << endl;

     cout << "=== ================== ===" << endl
          << endl;

     // kasus 3a
     float a3a, b3a;
     float kecil, besar, sama, beda;
     cout << "======= Kasus 3a =======" << endl;

     cout << "Masukkan bilangan A: ";
     cin >> a3a;
     cout << "Masukkan bilangan B: ";
     cin >> b3a;

     kecil = a3a < b3a;
     besar = a3a > b3a;
     sama = a3a == b3a;
     beda = a3a != b3a;

     // output
     cout << "Hasil operasi:" << endl;
     cout << a3a << " < " << b3a << " = " << kecil << endl;
     cout << a3a << " > " << b3a << " = " << besar << endl;
     cout << a3a << " = " << b3a << " = " << sama << endl;
     cout << a3a << " != " << b3a << " = " << beda << endl;

     cout << "======= ======= =======" << endl
          << endl;

     // kasus pecah ribuan
     int n, ribuan, ratusan, puluhan, satuan;
     int ribu, ratus, puluh;
     int modRibuan, modRatusan, modPuluhan;
     cout << "================ Kasus Pecah Ribuan ================" << endl;

     cout << "Masukkan angka ribuan : ";
     cin >> n;

     ribuan = n / 1000;            // mengambil angka pertama dari 4 int
     modRibuan = n % 1000;         // mengambil 3 angka terakhir
     ratusan = modRibuan / 100;    // mengambil angka pertama dari 3 int
     modRatusan = modRibuan % 100; // mengambil 2 angka terakhir
     puluhan = modRatusan / 10;    // mengambil angka pertama dari 2 int
     satuan = modRatusan % 10;     // mengambil angka terakhir dari 2 int

     ribu = n - modRibuan;
     ratus = modRibuan - modRatusan;
     puluh = modRatusan - satuan;

     cout << "hasil pecahan ribuan dari (" << n << ")" << endl;
     cout << n << " = " << ribuan << " ribuan, " << ratusan << " ratusan, " << puluhan << " puluhan, " << satuan << " satuan." << endl;
     cout << n << " = " << ribu << " + " << ratus << " + " << puluh << " + " << satuan << endl;

     cout << "================ ================== ================" << endl
          << endl;

     return 0;
}
