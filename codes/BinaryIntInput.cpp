#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream binaryio("temp.dat", ios::in | ios::binary);
  int value;
  binaryio.read(reinterpret_cast<char*>(&value), sizeof(value));
  cout << value << endl;
  binaryio.close();

  return 0;
}
