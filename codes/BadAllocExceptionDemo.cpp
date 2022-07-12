#include <iostream>
using namespace std;

int main()
{
  try
  {
    for (int i = 1; i <= 100; i++)
    {
      new int[70000000];
      cout << i << " arrays have been created" << endl;
    }
  }
  catch (bad_alloc& ex)
  {
    cout << "Exception: " << ex.what() << endl;
  }

  return 0;
}
