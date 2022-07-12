#include <iostream>
#include <stdexcept>
using namespace std;

int f1()
{
  try
  {
    throw runtime_error("Exception in f1");
  }
  catch (exception& ex)
  {
    cout << "Exception caught in function f1" << endl;
    cout << ex.what() << endl;
    throw; // Rethrow the exception
  }
}

int main()
{
  try
  {
    f1();
  }
  catch (exception& ex)
  {
    cout << "Exception caught in function main" << endl;
    cout << ex.what() << endl;
  }

  return 0;
}
