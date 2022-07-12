#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream output;

  // Create a file
  output.open("numbers.txt");

  // Write numbers
  output << 95 << " " << 56 << " " << 34;

  // close file
  output.close();

  cout << "Done" << endl;

  return 0;
}
