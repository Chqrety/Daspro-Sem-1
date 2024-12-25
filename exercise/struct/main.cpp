#include <iostream>
using namespace std;

typedef struct mahasiswa {
    string nim, nama;
    float ipk;
} mhs;

void cetak(mhs m[], int s);

int main() {

    mhs dasPro[40];
    int n, i;

    cout << "Berapa mahasiswa yang ingin di input?" << endl;
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Mahasiswa ke " << i + 1 << endl;
        cout << "Masukkan NIM       :";
        cin >> dasPro[i].nim;
        cout << "Masukkan Nama      :";
        cin >> dasPro[i].nama;
        do {
            cout << "Masukkan IPK [0-4] :";
            cin >> dasPro[i].ipk;
        } while (dasPro[i].ipk < 0.00 || dasPro[i].ipk > 4.00);
    }

    char pilih;
    int menu, urutan, iMin, iMax;
    float maxx, minn;

    do {
        cout << endl << "Menu:\n1. Tampil Data\n2. Analaisa (Min Max)\n3. Ubah IPK\nMasukkan menu pilihan : ";
        cin >> menu;
        if (menu == 1) {
            cetak(dasPro, n);
        } else if (menu == 2) {
            maxx = 0;
            minn = 5;
            for (i = 0; i < n; i++) {
                if (dasPro[i].ipk > maxx) {
                    maxx = dasPro[i].ipk;
                    iMax = i;
                }
                if (dasPro[i].ipk < minn) {
                    minn = dasPro[i].ipk;
                    iMin = i;
                }
            }
            cout << "IPK tertinggi adalah " << maxx << " milik " << dasPro[iMax].nama << endl;
            cout << "IPK terendah adalah " << minn << " milik " << dasPro[iMin].nama << endl;

        } else if (menu == 3) {
            /* code */
        }
        cout << endl << "Apakah ingin Melanjutkan? (y/n)";
        cin >> pilih;

    } while (pilih == 'Y' || pilih == 'y');

    return 0;
}

void cetak(mhs m[], int s) {
    int i;
    cout << "----------------------------------" << endl;
    cout << "| No | NIM     | Nama      | IPK |" << endl;
    cout << "----------------------------------" << endl;
    for (i = 0; i < s; i++) { // output
        cout << "| " << i + 1 << "  | " << m[i].nim << " | " << m[i].nama << "     | " << m[i].ipk << " |" << endl;
    }
    cout << "----------------------------------" << endl << endl;
}
