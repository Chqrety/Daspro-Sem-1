#include <iostream>

using namespace std;

int main()
{
  float a1, b1;
  float tambah, kurang, kali, bagi;

  cout << "input a: ";
  cin >> a1;
  cout << "input b: ";
  cin >> b1;

  tambah = a1 + b1;
  kurang = a1 - b1;
  kali = a1 * b1;
  bagi = a1 / b1;

  cout << endl
       << "hasil " << a1 << " + " << b1 << ": " << tambah << endl;
  cout << "hasil " << a1 << " - " << b1 << ": " << kurang << endl;
  cout << "hasil " << a1 << " * " << b1 << ": " << kali << endl;
  cout << "hasil " << a1 << " / " << b1 << ": " << bagi << endl;

  return 0;
}
