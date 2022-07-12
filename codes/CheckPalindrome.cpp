#include <iostream>
#include <string>
using namespace std;

// Check if a string is a palindrome
bool isPalindrome(const string &s);

int main()
{
  // Prompt the user to enter a string
  cout << "Enter a string: ";
  string s;
  getline(cin, s);

  if (isPalindrome(s))
    cout << s << " is a palindrome" << endl;
  else
    cout << s << " is not a palindrome" << endl;

  return 0;
}

bool isPalindrome(const string &s)
{
  // The index of the first character in the string
  int low = 0;

  // The index of the last character in the string
  int high = s.length() - 1;

  while (low < high)
  {
    if (s[low] != s[high])
      return false; // Not a palindrome

    low++;
    high--;
  }

  return true; // The string is a palindrome
}
