#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama, jurusan, universitas;

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

    return 0;
}