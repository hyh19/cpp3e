#include <iostream>
using namespace std;

class Parent
{
  virtual void m() { }
};

class Child: public Parent
{
public:
  void m()
  {
    cout << "invoke m" << endl;
  }
};

int main()
{
  Parent* p = new Child();
 
dynamic_cast<Child*>(p)->m();

  return 0;
}
