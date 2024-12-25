// #include <iostream>
// using namespace std;

// void printPattern(int rows, bool isOdd) {
//     for (int i = 0; i < rows; i++) {
//         if (isOdd) {
//             // Pola untuk bilangan ganjil (6 baris)
//             if (i == 0 || i == 3 || i == 5) {
//                 // Baris 0, 3, 5 (full bintang)
//                 for (int j = 0; j < 6; j++) {
//                     cout << "*";
//                 }
//             } else {
//                 // Baris 1, 2, 4 (pola * * *)
//                 cout << "* ";
//                 for (int j = 1; j < 4; j++) {
//                     if (j % 2 == 1) {
//                         cout << " ";
//                     } else {
//                         cout << "*";
//                     }
//                 }
//                 cout << "*";
//             }
//         } else {
//             // Pola untuk bilangan genap (5 baris)
//             if (i % 2 == 0) {
//                 // Baris genap (0, 2, 4)
//                 for (int j = 0; j < rows; j++) {
//                     cout << "*";
//                 }
//             } else {
//                 // Baris ganjil (1, 3)
//                 for (int j = 0; j < rows; j++) {
//                     if (j % 2 == 0) {
//                         cout << "*";
//                     } else {
//                         cout << " ";
//                     }
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int choice;
//     cout << "Pilih pola:" << endl;
//     cout << "1. Pola Ganjil" << endl;
//     cout << "2. Pola Genap" << endl;
//     cout << "Masukkan pilihan (1/2): ";
//     cin >> choice;

//     int rows;
//     if (choice == 1) {
//         cout << "Masukkan jumlah baris untuk pola ganjil: ";
//         cin >> rows;
//         printPattern(rows, true);
//     } else if (choice == 2) {
//         cout << "Masukkan jumlah baris untuk pola genap: ";
//         cin >> rows;
//         printPattern(rows, false);
//     } else {
//         cout << "Pilihan tidak valid!" << endl;
//         return 1;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

void printPattern(int rows, bool isOdd) {
    for (int i = 0; i < rows; i++) {
        if (isOdd) {
            // Pola untuk bilangan genap(6 baris)
            if (i == 0 || i == 3 || i == 5) {
                // Baris 0, 3, 5 (full bintang)
                for (int j = 0; j < 6; j++) {
                    cout << "*";
                }
            } else {
                // Baris 1, 2, 4 (pola * * *)
                cout << "* ";
                for (int j = 1; j < 4; j++) {
                    if (j % 2 == 1) {
                        cout << " ";
                    } else {
                        cout << "*";
                    }
                }
                cout << "*";
            }
        } else {
            // Pola untuk bilangan ganjil
            if (i % 2 == 0) {
                // Baris genap (0, 2, 4)
                for (int j = 0; j < 5; j++) {
                    cout << "*";
                }
            } else {
                // Baris ganjil (1, 3, 5)
                cout << "*";
                for (int j = 1; j < 4; j++) {
                    if (j % 2 == 1) {
                        cout << " ";
                    } else {
                        cout << "*";
                    }
                }
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main() {
    int choice;
    cout << "Pilih pola:" << endl;
    cout << "1. Pola Genap" << endl;
    cout << "2. Pola Ganji;" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> choice;

    int rows;
    if (choice == 1) {
        cout << "Masukkan jumlah baris untuk pola genap: ";
        cin >> rows;
        printPattern(rows, true);
    } else if (choice == 2) {
        cout << "Masukkan jumlah baris untuk pola ganjil: ";
        cin >> rows;
        printPattern(rows, false);
    } else {
        cout << "Pilihan tidak valid!" << endl;
        return 1;
    }

    return 0;
}