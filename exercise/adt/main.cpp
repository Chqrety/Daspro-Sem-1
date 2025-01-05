#include "header.h"

int main() {

    mhs dasPro[40];
    int n, i;

    cout << "Berapa mahasiswa yang ingin di input?" << endl;
    cin >> n;

    input(dasPro, n);
    cout << endl;
    cetak(dasPro, n);

    char pilih;
    int menu, urutan, iMin, iMax;
    float maxx, minn;

    do {
        cout << endl << "Menu:\n1. Tampil Data\n2. Analaisa (Min Max)\n3. Ubah IPK\nMasukkan menu pilihan : ";
        cin >> menu;
        if (menu == 1) {
            cetak(dasPro, n);
        } else if (menu == 2) {
            cout << "IPK Tertinggi adalah " << ipkMax(dasPro, n) << " milik " << mhsIPKMax(dasPro, n) << endl;
            cout << "IPK Terendah adalah " << ipkMin(dasPro, n) << " milik " << mhsIPKMin(dasPro, n) << endl;

        } else if (menu == 3) {
            cout << "Masukkan urutan mahasiswa yang ingin diubah IPK-nya: ";
            cin >> urutan;
            if (urutan > 0 && urutan <= n) {
                do {
                    cout << "Masukkan IPK baru [0-4] :";
                    cin >> dasPro[urutan - 1].ipk;
                } while (dasPro[urutan - 1].ipk < 0.00 || dasPro[urutan - 1].ipk > 4.00);
                cout << "IPK mahasiswa " << dasPro[urutan - 1].nama << " telah diubah menjadi " << dasPro[urutan - 1].ipk << endl;
            } else {
                cout << "Urutan mahasiswa tidak valid!" << endl;
            }
        } else if (menu == 4) {
            cout << "Masukkan nama mahasiswa yang ingin dicari: ";
            string nama;
            cin >> nama;
            cetakDataMhs(dasPro, n, nama);
        } else if (menu == 5) {
            //
        }

        else {
            cout << "Menu tidak valid!" << endl;
            cout << endl << "Apakah ingin Melanjutkan? (y/n)";
            cin >> pilih;
        }
        cout << endl << "Apakah ingin Melanjutkan? (y/n)";
        cin >> pilih;

    } while (pilih == 'Y' || pilih == 'y');

    return 0;
}
