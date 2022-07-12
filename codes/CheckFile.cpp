#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string filename;
  cout << "Enter a file name: ";
  cin >> filename;

  ifstream input(filename.c_str());
  
  if (input.fail())
    cout << filename << " does not exist" << endl;
  else
    cout << filename << " exists" << endl;

  return 0;
}
