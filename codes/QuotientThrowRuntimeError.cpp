#include <iostream>
#include <stdexcept>
using namespace std;

int quotient(int number1, int number2)
{
  if (number2 == 0)
    throw runtime_error("Divisor cannot be zero");

  return number1 / number2;
}

int main()
{
  // Read two integers
  cout << "Enter two integers: ";
  int number1, number2;
  cin >> number1 >> number2;

  try
  {
    int result = quotient(number1, number2);
    cout << number1 << " / " << number2 << " is "
      << result << endl;
  }
  catch (runtime_error& ex)
  {
    cout << ex.what() << endl;
  }

  cout << "Execution continues ..." << endl;

  return 0;
}
