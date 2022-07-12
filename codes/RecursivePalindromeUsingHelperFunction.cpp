#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s, int low, int high)
{
  if (high <= low) // Base case
    return true;
  else if (s[low] != s[high]) // Base case
    return false;
  else
    return isPalindrome(s, low + 1, high - 1);
}

bool isPalindrome(const string& s)
{
  return isPalindrome(s, 0, s.size() - 1);
}

int main()
{
  cout << "Enter a string: ";
  string s;
  getline(cin, s);

  if (isPalindrome(s))
    cout << s << " is a palindrome" << endl;
  else
    cout << s << " is not a palindrome" << endl;

  return 0;
}
