g++ PolymorphismDemo.cpp GeometricObject.h GeometricObject.cpp DerivedCircle.h DerivedCircle.cpp DerivedRectangle.h DerivedRectangle.cpp -oPolymorphismDemo
g++ GeometricObject.cpp GeometricObject.h 
g++ DerivedCircle.h DerivedCircle.cpp 
g++ DerivedRectangle.h DerivedRectangle.cpp 
g++ TestGeometricObject.cpp GeometricObject.h GeometricObject.cpp DerivedCircle.h DerivedCircle.cpp DerivedRectangle.h DerivedRectangle.cpp -oTestGeometricObject
g++ TestCircleWithHeader.cpp Circle.h Circle.cpp -oTestCircleWithHeader.exe
