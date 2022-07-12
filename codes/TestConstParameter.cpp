#include <iostream>
using namespace std;

// Return the max between two numbers
int max(const int &num1, const int &num2) {
  int result;

  if (num1 > num2)
    result = num1;
  else
    result = num2;

  return result;
}

int main()
{
  cout << max(1, 4) << endl;
  cout << max(15, 14) << endl;

  return 0;
}
