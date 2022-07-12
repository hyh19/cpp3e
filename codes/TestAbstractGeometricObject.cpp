#include "AbstractGeometricObject.h"
#include "DerivedCircleFromAbstractGeometricObject.h"
#include "DerivedRectangleFromAbstractGeometricObject.h"
#include <iostream>
using namespace std;

// A function for comparing the areas of two geometric objects
bool equalArea(const GeometricObject& g1,
  const GeometricObject& g2)
{
  return g1.getArea() == g2.getArea();
}

// A function for displaying a geometric object
void displayGeometricObject(const GeometricObject& g)
{
  cout << "The area is " << g.getArea() << endl;
  cout << "The perimeter is " << g.getPerimeter() << endl;
}

int main()
{
  Circle circle(5);
  Rectangle rectangle(5, 3);

  cout << "Circle info: " << endl;
  displayGeometricObject(circle);

  cout << "\nRectangle info: " << endl;
  displayGeometricObject(rectangle);

  cout << "\nThe two objects have the same area? " <<
    (equalArea(circle, rectangle) ? "Yes" : "No") << endl;

  return 0;
}
