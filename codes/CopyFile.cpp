#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  // Enter a source file
  cout << "Enter a source file name: ";
  string inputFilename;
  cin >> inputFilename;

  // Enter a target file
  cout << "Enter a target file name: ";
  string outputFilename;
  cin >> outputFilename;

  // Create input and output streams
  ifstream input(inputFilename.c_str());
  ofstream output(outputFilename.c_str());

  if (input.fail())
  {
    cout << inputFilename << " does not exist" << endl;
    cout << "Exit program" << endl;
    return 0;
  }

  char ch = input.get();
  while (!input.eof()) // Continue if not end of file
  {
    output.put(ch);
    ch = input.get(); // Read next character
  }

  input.close();
  output.close();

  cout << "\nCopy Done" << endl;

  return 0;
}
