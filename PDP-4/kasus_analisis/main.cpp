#include <iostream>

using namespace std;

int main()
{
  // kasus 1
  cout << "===== Kasus 1 =====" << endl
       << endl;

  float nmb;

  cout << "masukkan number : ";
  cin >> nmb;

  if (nmb < 0)
  {
    nmb = nmb * -1;
  }

  cout << "Bilangannya positif adalah " << nmb << endl;

  cout << endl
       << "===================" << endl;

  return 0;
}