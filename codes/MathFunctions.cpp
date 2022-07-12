#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const double PI = 3.14159;

  // Test trigonometric functions
  cout << "sin(PI / 2) = " << sin(PI / 2) << endl;
  cout << "cos(PI / 2) = " << cos(PI / 2) << endl;
  cout << "tan(PI / 2) = " << tan(PI / 2) << endl;

  // Test algebraic functions
  cout << "exp(1.0) = " << exp(1.0) << endl;
  cout << "log(2.78) = " << log(2.78) << endl;
  cout << "log10(10.0) = " << log10(10.0) << endl;
  cout << "sqrt(4.0) = " << sqrt(4.0) << endl;
  cout << "pow(2.5, 2.5) = " << pow(2.5, 2.5) << endl;

  return 0;
}
