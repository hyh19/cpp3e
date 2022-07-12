#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s)
{
  if (s.size() <= 1) // Base case
    return true;
  else if (s[0] != s[s.size() - 1]) // Base case
    return false;
  else
    return isPalindrome(s.substr(1, s.size() - 2));
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
