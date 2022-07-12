#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Enter a starting character: ";
	char startChar;
	cin >> startChar;

	cout << "Enter an ending character: ";
	char endChar;
	cin >> endChar;

	// Get a random character
	char randomChar = static_cast<char>(startChar + rand() % 
		(endChar - startChar + 1));

  cout << "The random character between " << startChar << " and " 
		<< endChar << " is " << randomChar << endl;

  return 0;
}