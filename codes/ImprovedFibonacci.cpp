#include <iostream>
using namespace std;

// The function for finding the Fibonacci number
int fib(int);

int main()
{
  // Prompt the user to enter an integer
  cout <<  "Enter an index for the Fibonacci number: ";
  int index;
  cin >> index;

  // Display factorial
  cout << "Fibonacci number at index " << index << " is "
    << fib(index) << endl;

  return 0;
}

// The function for finding the Fibonacci number
int fib(int n)
{
  long f0 = 0; // For fib(0)
  long f1 = 1; // For fib(1)
  long f2 = 1; // For fib(2)

  if (n == 0)
    return f0;
  else if (n == 1)
    return f1;
  else if (n == 2)
    return f2;

  for (int i = 3; i <= n; i++)
  {
    f0 = f1;
    f1 = f2;
    f2 = f0 + f1;
  }

  return f2;
}
