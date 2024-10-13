#include <iostream>

using namespace std;

int main()
{
  float a2, b2;
  float tambah, kurang, kali, bagi;

  cout << "input a: ";
  cin >> a2;
  cout << "input b: ";
  cin >> b2;

  tambah = a2 + b2;
  kurang = a2 - b2;
  kali = a2 * b2;
  bagi = a2 / b2;

  cout << endl
       << "hasil " << a2 << " + " << b2 << ": " << tambah << endl;
  cout << "hasil " << a2 << " - " << b2 << ": " << kurang << endl;
  cout << "hasil " << a2 << " * " << b2 << ": " << kali << endl;
  cout << "hasil " << a2 << " / " << b2 << ": " << bagi << endl;

  return 0;
}
