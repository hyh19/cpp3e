#include <iostream>
#include <string>
using namespace std;

class A
{
public:
  virtual string toString()
  {
    return "A";
  }
};

class B: public A
{
public:
  string toString()
  {
    return "B";
  }
};

int main()
{

  A* x = new B();
  cout << static_cast<B*>(x)->toString() << endl;

  return 0;
}
