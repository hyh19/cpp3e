#include <iostream>
#include <stdexcept>
using namespace std;

double getArea(double radius)
{
  if (radius < 0)
    throw invalid_argument("Radius cannot be negative");

  return radius * radius * 3.14159;
}

int main()
{
  // Pormpt the user to enter radius
  cout << "Enter radius: ";
  double radius;
  cin >> radius;

  try
  {
    double result = getArea(radius);
    cout << "The area is " << result << endl;
  }
  catch (exception &e)
  {
    cout << e.what() << endl;
  }

  cout << "Execution continues ..." << endl;

  return 0;
}
