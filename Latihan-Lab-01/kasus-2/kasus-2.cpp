/* soal dan harus dikoreksi
#include<iostream>
int main(){
cout << nama saya Mawar << endl;
cout << “Saya dari Semarang” << endl
cout << “Kuliah di Udinus” << endl;
}
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "nama saya Mawar" << endl;
    cout << "Saya dari Semarang" << endl;
    cout << "Kuliah di Udinus" << endl;

    return 0;
}

/*
 1. Tulis apa saja error pada kode program diatas?
jawab :
- tidak menggunakan namespace
- pada teks nama saya mawar tidak dibungkus petik
- tanda petik berbeda
- pada line saya dari semarang tidak menggunakan ; (titik koma)

2. Apa solusinya?
- menambahkan "using namespace std;"
- menambahkan petik pada teks
- mengganti tanda petik
- memberikan titik koma di akhir syntax
*/
