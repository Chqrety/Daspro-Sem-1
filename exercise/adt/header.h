#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
using namespace std;

typedef struct mahasiswa {
    string nim, nama;
    float ipk;
} mhs;

void cetak(mhs m[], int n);
void cetakDataMhs(mhs m[], int n, string nama);
void input(mhs m[], int n);

float ipkMax(mhs m[], int n);
float ipkMin(mhs m[], int n);
string mhsIPKMax(mhs m[], int n);
string mhsIPKMin(mhs m[], int n);

#endif