#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Prompt the user to enter a string
  cout << "Enter a string: ";
  string s;
  getline(cin, s);

  // The index of the first character in the string
  int low = 0;

  // The index of the last character in the string
  int high = s.length() - 1;

  bool isPalindrome = true;
  while (low < high) 
  {
    if (s[low] != s[high]) 
    {
      isPalindrome = false; // Not a palindrome
      break; 
    } 

    low++;
    high--;
  }

  if (isPalindrome)
    cout << s << " is a palindrome" << endl;
  else
    cout << s << " is not a palindrome" << endl;

  return 0;
}
