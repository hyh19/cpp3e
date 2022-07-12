#include "AbstractGeometricObject.h"
#include "DerivedCircleFromAbstractGeometricObject.h"
#include "DerivedRectangleFromAbstractGeometricObject.h"
#include <iostream>
using namespace std;

// A function for displaying a geometric object
void displayGeometricObject(GeometricObject& g)
{
  cout << "The area is " << g.getArea() << endl;
  cout << "The perimeter is " << g.getPerimeter() << endl;

  GeometricObject* p = &g;
  Circle* p1 = dynamic_cast<Circle*>(g);
  Rectangle* p2 = dynamic_cast<Rectangle*>(p);

  if (p1 != NULL)
  {
    cout << "The radius is " << p1->getRadius() << endl;
    cout << "The diameter is " << p1->getDiameter() << endl;
  }

  if (p2 != NULL)
  {
    cout << "The width is " << p2->getWidth() << endl;
    cout << "The height is " << p2->getHeight() << endl;
  }
}

int main()
{
  Circle circle(5);
  Rectangle rectangle(5, 3);

  cout << "Circle info: " << endl;
  displayGeometricObject(circle);

  cout << "\nRectangle info: " << endl;
  displayGeometricObject(rectangle);

  return 0;
}
