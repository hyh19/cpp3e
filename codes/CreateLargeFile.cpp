#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
  fstream output;
  output.open("largedata.dat", ios::out | ios::binary);

  for (int i = 0; i < 2000000; i++)
  {
    int value = rand();
    output.write(reinterpret_cast<char *>(&value), sizeof(value));
  }

  output.close();
  cout << "File created" << endl;

  fstream input;
  input.open("largedata.dat", ios::in | ios::binary);
  int value;

  cout << "The first 10 numbers in the file are " << endl;
  for (int i = 0; i < 10; i++)
  {
    input.read(reinterpret_cast<char *>(& value), sizeof(value));
    cout << value << " ";
  }

  input.close();

  return 0;
}
