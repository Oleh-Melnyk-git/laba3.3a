#include "Point.h"
#include <iostream>
using namespace std;

int main() {
  Point p1(3, 4);
  Point p2(3, 4);
  Point p3(5, 12);

  cout << "p1 = " << p1 << endl;
  cout << "p2 = " << p2 << endl;
  cout << "p3 = " << p3 << endl;

  cout << "p1 == p2 ? " << (p1 == p2 ? "true" : "false") << endl;
  cout << "p1 != p3 ? " << (p1 != p3 ? "true" : "false") << endl;

  cout << "Distance p1 to origin = " << p1.distanceToOrigin() << endl;

  double r, theta;
  p3.toPolar(r, theta);
  cout << "Polar coordinates of p3: r = " << r << ", theta = " << theta
       << " rad" << endl;

  cout << "Object count = " << Object::Count() << endl;

  return 0;
}
