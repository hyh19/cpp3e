#include <typeinfo>
#include "DerivedCircleFromAbstractGeometricObject.h" 
#include "DerivedRectangleFromAbstractGeometricObject.h"
#include <iostream>
using namespace std;

int main()
{
  try
  {
    Rectangle r(3, 4);
    Circle& c = dynamic_cast<Circle&>(r);
  }
  catch (bad_cast& ex)
  {
    cout << "Exception: " << ex.what() << endl;
  }

  return 0;
}
