#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream output;

  // Create a file
  output.open("scores.txt");

  // Write two lines
  output << "John" << " " << "T" << " " << "Smith" 
    << " " << 90 << endl;
  output << "Eric" << " " << "K" << " " << "Jones" 
    << " " << 85 << endl;

  output.close();

  cout << "Done" << endl;

  return 0;
}
