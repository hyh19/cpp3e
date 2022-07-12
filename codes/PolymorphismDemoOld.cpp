#include <iostream>
using namespace std;

class C
{
public:
  virtual string toString() const
  {
    return "class C";
  }
};

class B: public C
{
  string toString() const
  {
    return "class B";
  }
};

class A: public B
{
  string toString() const
  {
    return "class A";
  }
};

void displayObject(C *p)
{
  cout << p->toString().data() << endl;
}

int main()
{
  A a = A();
  B b = B();
  C c = C();
  displayObject(&a);
  displayObject(&b);
  displayObject(&c);

  return 0;
}
