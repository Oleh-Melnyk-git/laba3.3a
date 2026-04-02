#include "Point.h"

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}
Point::Point(const Point &other) : x(other.x), y(other.y) {}

void Point::Init(double x, double y) {
  this->x = x;
  this->y = y;
}

void Point::Display() const {
  std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void Point::Read() {
  std::cout << "Enter x: ";
  std::cin >> x;
  std::cout << "Enter y: ";
  std::cin >> y;
}

void Point::toPolar(double &r, double &theta) const {
  r = sqrt(x * x + y * y);
  theta = atan2(y, x); // кут у радіанах
}

double Point::distanceToOrigin() const { return sqrt(x * x + y * y); }

bool Point::operator==(const Point &other) const {
  return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point &other) const { return !(*this == other); }

Point &Point::operator=(const Point &other) {
  if (this != &other) {
    x = other.x;
    y = other.y;
  }
  return *this;
}

std::ostream &operator<<(std::ostream &out, const Point &p) {
  out << std::string(p);
  return out;
}

std::istream &operator>>(std::istream &in, Point &p) {
  std::cout << "Enter x: ";
  in >> p.x;
  std::cout << "Enter y: ";
  in >> p.y;
  return in;
}

Point::operator std::string() const {
  std::stringstream ss;
  ss << "(" << x << ", " << y << ")";
  return ss.str();
}

Point::~Point() {}
