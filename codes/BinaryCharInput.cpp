#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream binaryio("city.dat", ios::in | ios::binary);
  char s[10];
  binaryio.read(s, 10);
  cout << "Number of chars read: " << binaryio.gcount() << endl;
  s[binaryio.gcount()] = '\0'; // Append a C-string terminator
  cout << s << endl;
  binaryio.close();

  return 0;
}