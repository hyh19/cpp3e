#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Open a file
  ifstream input("score.txt");

  if (input.fail())
  {
    cout << "File does not exist" << endl;
    cout << "Exit program" << endl;
    return 0;
  }

  double sum = 0;
  double number;
  while (input >> number) // Read data to the end of file
  {
    cout << number << " "; // Display data
    sum += number;
  }

  input.close();

  cout << "\nTotal is " << sum << endl;

  return 0;
}