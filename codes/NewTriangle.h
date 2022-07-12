#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "GeometricObject.h"
#include "TriangleException.h"
#include "NonPositiveSideException.h"
#include <cmath>

class Triangle: public GeometricObject
{
public:
  Triangle()
  {
    side1 = side2 = side3 = 1;
  }

  Triangle(double side1, double side2, double side3)
  {
    check(side1);
    check(side2);
    check(side3);

    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
  }

  double getSide1() const
  {
    return side1;
  }

  double getSide2() const
  {
    return side2;
  }

  double getSide3() const
  {
    return side3;
  }

  void setSide1(double side1)
  {
    check(side1);
    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side1 = side1;
  }

  void setSide2(double side2)
  {
    check(side2);
    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side2 = side2;
  }

  void setSide3(double side3)
  {
    check(side3);
    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side3 = side3;
  }

  double getPerimeter() const
  {
    return side1 + side2 + side3;
  }

  double getArea() const
  {
    double s = getPerimeter() / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
  }

private:
  double side1, side2, side3;

  bool isValid(double side1, double side2, double side3) const
  {
    return (side1 < side2 + side3) && (side2 < side1 + side3) &&
      (side3 < side1 + side2);
  }

  void check(double side) const
  {
    if (side <= 0)
      throw NonPositiveSideException(side);
  }
};

#endif 