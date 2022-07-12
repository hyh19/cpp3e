#include <iostream>
#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"

using namespace std;

void displayGeometricObject(GeometricObject g)
{
  cout << g.toString() << endl;
}

int main()
{
  displayGeometricObject(GeometricObject());
  displayGeometricObject(Circle(5));
  displayGeometricObject(Rectangle(4, 6));

  return 0;
}
