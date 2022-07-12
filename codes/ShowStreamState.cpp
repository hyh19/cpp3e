#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void showState(const fstream&);

int main()
{
  fstream inout;

  // Create an output file
  inout.open("temp.txt", ios::out);
  inout << "Dallas";
  cout << "Normal operation (no errors)" << endl;
  showState(inout);
  inout.close();

  // Create an input file
  inout.open("temp.txt", ios::in);

  // Read a string
  string city;
  inout >> city;
  cout << "End of file (no errors)" << endl;
  showState(inout);

  inout.close();

  // Attempt to read after file closed
  inout >> city;
  cout << "Bad operation (errors)" << endl;
  showState(inout);

  return 0;
}

void showState(const fstream& stream)
{
  cout << "Stream status: " << endl;
  cout << "  eof(): " << stream.eof() << endl;
  cout << "  fail(): " << stream.fail() << endl;
  cout << "  bad(): " << stream.bad() << endl;
  cout << "  good(): " << stream.good() << endl;
}
