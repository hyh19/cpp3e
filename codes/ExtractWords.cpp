#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
  string text("Programming is fun");
  stringstream ss(text);

  cout << "The words in the text are " << endl;
  string word;
  while (!ss.eof())
  {
    ss >> word;
    cout << word << endl;
  } 

  return 0;
}