#include "header.h"

float ipkMax(mhs m[], int n) {
    float maxx = 0;
    for (int i = 0; i < n; i++) {
        if (m[i].ipk > maxx) {
            maxx = m[i].ipk;
        }
    }
    return maxx;
}

float ipkMin(mhs m[], int n) {
    float minn = 5;
    for (int i = 0; i < n; i++) {
        if (m[i].ipk < minn) {
            minn = m[i].ipk;
        }
    }
    return minn;
}

string mhsIPKMax(mhs m[], int n) {
    float maxx = 0;
    int iMax;
    for (int i = 0; i < n; i++) {
        if (m[i].ipk > maxx) {
            maxx = m[i].ipk;
            iMax = i;
        }
    }
    return m[iMax].nama;
}

string mhsIPKMin(mhs m[], int n) {
    float minn = 5;
    int iMin;
    for (int i = 0; i < n; i++) {
        if (m[i].ipk < minn) {
            minn = m[i].ipk;
            iMin = i;
        }
    }
    return m[iMin].nama;
}

void input(mhs m[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke " << i + 1 << endl;
        cout << "Masukkan NIM       :";
        cin >> m[i].nim;
        cout << "Masukkan Nama      :";
        cin >> m[i].nama;
        do {
            cout << "Masukkan IPK [0-4] :";
            cin >> m[i].ipk;
        } while (m[i].ipk < 0.00 || m[i].ipk > 4.00);
    }
}

void cetak(mhs m[], int n) {
    int i;
    cout << "----------------------------------" << endl;
    cout << "| No | NIM     | Nama      | IPK |" << endl;
    cout << "----------------------------------" << endl;
    for (i = 0; i < n; i++) { // output
        cout << "| " << i + 1 << "  | " << m[i].nim << " | " << m[i].nama << "     | " << m[i].ipk << " |" << endl;
    }
    cout << "----------------------------------" << endl << endl;
}

void cetakDataMhs(mhs m[], int n, string nama) {
    int i;
    cout << "----------------------------------" << endl;
    cout << "| No | NIM     | Nama      | IPK |" << endl;
    cout << "----------------------------------" << endl;
    for (i = 0; i < n; i++) {
        if (m[i].nama == nama) {
            cout << "| " << i + 1 << "  | " << m[i].nim << " | " << m[i].nama << "     | " << m[i].ipk << " |" << endl;
        }
    }
    cout << "----------------------------------" << endl << endl;
}