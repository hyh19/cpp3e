#include <iostream>
using namespace std;

// Return the gcd of two integers 
int gcd(int m, int n)
{
  if (m % n == 0)
    return n;
  else
    return gcd(n, m % n);
}

int main()
{
  // Prompt the user to enter two integers
  cout << "Enter first integer: ";
  int n1;
  cin >> n1;

  cout << "Enter second integer: ";
  int n2;
  cin >> n2;

  cout << "The greatest common divisor for " << n1 <<
    " and " << n2 << " is " << gcd(n1, n2) << endl;

  return 0;
}
