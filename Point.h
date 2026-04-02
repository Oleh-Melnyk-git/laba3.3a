#pragma once
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

class Object {
  inline static unsigned int count = 0;

public:
  Object() { count++; }
  Object(const Object &) { count++; }
  ~Object() { count--; }
  static unsigned int Count() { return count; }
};

class Point : public Object {
private:
  double x;
  double y;

public:
  Point();
  Point(double x, double y);
  Point(const Point &other);
  ~Point();

  void Init(double x, double y);
  void Display() const;
  void Read();

  void toPolar(double &r, double &theta) const;
  double distanceToOrigin() const;

  bool operator==(const Point &other) const;
  bool operator!=(const Point &other) const;
  Point &operator=(const Point &other);

  friend std::ostream &operator<<(std::ostream &out, const Point &p);
  friend std::istream &operator>>(std::istream &in, Point &p);

  operator std::string() const;
};
