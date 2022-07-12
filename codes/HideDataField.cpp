#include <iostream>
using namespace std;

class Foo
{
public:
  int x; // Data field
  int y; // Data field

  Foo()
  {
    x = 10;
    y = 10;
  }

  void p()
  {
    int x = 20; // Local variable
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
  }
};

int main()
{
  Foo foo;
  foo.p();
  
  return 0;
}
