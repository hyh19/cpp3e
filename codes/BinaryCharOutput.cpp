#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  fstream binaryio("city.dat", ios::out | ios::binary);
  string s = "Atlanta";
  binaryio.write(s.c_str(), s.size()); // Write s to file
  binaryio.close();

  cout << "Done" << endl;

  return 0;
}
