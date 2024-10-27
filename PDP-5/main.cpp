#include <iostream>

using namespace std;

int main() {

    // kasus 1
    cout << "============== Kasus 1 - Positive, Negative, Odd, Even =============" << endl << endl;

    int number;

    cout << "Masukkan number : ";
    cin >> number;

    if (number == 0) {
        cout << "0 is zero number";
    } else {
        if (number > 0) {
            cout << number << " is positive number," << endl;
        } else {
            cout << number << " is negative number," << endl;
        }

        if (number % 2 == 0) {
            cout << "Also is even number" << endl;
        } else {
            cout << "Also is odd number" << endl;
        }
    }

    cout << endl << "====================================================================" << endl << endl;

    // kasus 2
    cout << "======================== Kasus 2 - Parking =========================" << endl << endl;

    string tipe_kendaraan;
    int biaya, jam;

    cout << "Masukkan tipe kendaraan : ";
    cin >> tipe_kendaraan;

    cout << "Berapa jam anda parkir : ";
    cin >> jam;
    cout << endl;

    if (tipe_kendaraan == "s" || tipe_kendaraan == "S") {
        tipe_kendaraan = "Sepeda Motor";
        if (jam < 12) {
            biaya = 3000 * jam;
        } else {
            biaya = 50000;
        }
    } else if (tipe_kendaraan == "m" || tipe_kendaraan == "M") {
        tipe_kendaraan = "Mobil";
        if (jam < 12) {
            biaya = 5000 * jam;
        } else {
            biaya = 75000;
        }
    } else if (tipe_kendaraan == "t" || tipe_kendaraan == "T") {
        tipe_kendaraan = "Truk / Bus";
        if (jam < 12) {
            biaya = 25000 * jam;
        } else {
            biaya = 250000;
        }
    } else {
        biaya = 0;
    }

    cout << "Tipe Kendaraan " << tipe_kendaraan << endl << "Dengan durasi parkir selama " << jam << " jam" << endl << "Dikenakan tarif sebesar Rp." << biaya;

    cout << endl << "====================================================================" << endl << endl;

    // kasus 3
    cout << "======================= Kasus 3 - Great Sale =======================" << endl << endl;

    int pilihan, jumlah;
    double total_harga = 0.0, diskon = 0.0;

    cout << "Selamat datang di toko BABA SLAMET!" << endl;
    cout << "Silahkan pilih menu diskon bulan Oktober!!!" << endl;
    cout << "1. Kertas A4 80 gram merk PAPER - Rp. 55.000" << endl;
    cout << "2. Tinta warna printer EPSON merk INKQ - Rp. 125.000" << endl;
    cout << "3. Flashdisk SUNDRIVE 64 64GB - Rp. 180.000" << endl << endl;

    cout << "Pilih menu yang diinginkan : ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        cout << endl << "Masukkan jumlah kertas A4 yang mau dibeli: ";
        cin >> jumlah;
        cout << endl;

        total_harga = jumlah * 55000;

        if (jumlah >= 3 && jumlah <= 5) {
            diskon = total_harga * 0.05;
        } else if (jumlah >= 6 && jumlah <= 10) {
            diskon = total_harga * 0.10;
        } else if (jumlah >= 11 && jumlah <= 15) {
            diskon = total_harga * 0.15;
        } else if (jumlah > 15) {
            diskon = total_harga * 0.20;
            cout << "Selamat anda Mendapatkan FREE BOBA MILK TEA!!!" << endl;
        }
        break;

    case 2:
        cout << endl << "Masukkan jumlah tinta warna printer yang mau dibeli: ";
        cin >> jumlah;
        cout << endl;

        total_harga = jumlah * 125000;

        if (jumlah >= 3 && jumlah <= 10) {
            diskon = total_harga * 0.10;
            cout << "Selamat anda mendapatkan FREE 1 TINTA HITAM!!!" << endl;
        } else if (jumlah > 10) {
            diskon = total_harga * 0.20;
            total_harga -= 2000;
            cout << "Selamat anda mendapatkan FREE 1 PACK!!!" << endl;
        }
        break;

    case 3:
        cout << endl << "Masukkan jumlah flashdisk yang mau dibeli: ";
        cin >> jumlah;
        cout << endl;

        total_harga = jumlah * 180000;

        if (total_harga > 1800000 && total_harga <= 5000000) {
            total_harga -= 250000;
            cout << "Selamat anda mendapatkan FREE 1 MINI BAG!!!" << endl;
        } else if (total_harga > 5000000) {
            total_harga -= 750000;
            cout << "Selamat anda mendapatkan FREE 1 REGULAR BAG & 1 GANTUNGAN KUNCI!!!" << endl;
        }
        break;

    default:
        cout << "Pilihan tidak valid!" << endl;
        break;
    }

    total_harga -= diskon;
    cout << "Total harga belanjaan anda adalah: Rp. " << (int)total_harga << endl;

    cout << endl << "====================================================================" << endl << endl;

    return 0;
}
