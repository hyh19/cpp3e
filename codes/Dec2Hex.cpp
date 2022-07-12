#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Prompt the user to enter a decimal integer
  cout << "Enter a decimal number: ";
  int decimal;
	cin >> decimal;
	
  // Convert decimal to hex
  string hex = "";
    
  while (decimal != 0)
	{
    int hexValue = decimal % 16; 
      
    // Convert a decimal value to a hex digit 
    char hexChar = (hexValue <= 9 && hexValue >= 0) ?
      static_cast<char>(hexValue + '0') : 
			static_cast<char>(hexValue - 10 + 'A');
      
    hex = hexChar + hex;
    decimal = decimal / 16;
  }
    
  cout << "The hex number is " << hex << endl;

  return 0;
}