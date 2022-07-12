#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject
{
protected:
  GeometricObject();
  GeometricObject(const string& color, bool filled);

public:
  string getColor() const;
  void setColor(const string& color);
  bool isFilled() const;
  void setFilled(bool filled);
  string toString() const;
  virtual double getArea() const = 0;
  virtual double getPerimeter() const = 0;

private:
  string color;
  bool filled;
}; // Must place semicolon here

#endif
