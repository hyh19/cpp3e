#ifndef RATIONL_H
#define RATIONL_H
#include <string>
using namespace std;

class Rational
{
public:
  Rational();
  Rational(int numerator);
  Rational(int numerator, int denominator);
  int getNumerator() const;
  int getDenominator() const;
  Rational add(const Rational &secondRational) const;
  Rational operator+=(const Rational &secondRational);
  Rational subtract(const Rational &secondRational) const;
  Rational multiply(const Rational &secondRational) const;
  Rational divide(const Rational &secondRational) const;
  int compareTo(const Rational &secondRational) const;
  bool operator<(const Rational &secondRational) const;
  Rational &operator++(); // prefix ++
  Rational operator++(int dummy); // postfix ++
  int& operator[](int index);
  bool equals(const Rational &secondRational) const;
  int intValue() const;
  double doubleValue() const;
/*  operator double() const
  {
    return 1.0 * numerator / denominator;
  } */
  string toString() const;

  // Non-member function
  friend ostream& operator<<(ostream &cout, const Rational &r);
  friend istream& operator>>(istream &cin, Rational &r);

private:
  int numerator;
  int denominator;
  static int gcd(int n, int d);
};

Rational operator+(const Rational &r1, const Rational &r2);


#endif

