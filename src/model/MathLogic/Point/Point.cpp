//
// Created by Nikita Krylskii.
//

#include "Point.h"
#include <cmath>

// Constructors
Point::Point() : Point(0,0) {}
Point::Point(double xy) : Point(xy,xy) {}
Point::Point(double x, double y) {
    Point::x = x;
    Point::y = y;
}
Point::Point(const Point& _point) {
    x = _point.x;
    y = _point.y;
}

// Destructors
Point::~Point() {}

// Getters && Setters
double Point::getX() const {
    return x;
}
void Point::setX(double X) {
    x = X;
}
double Point::getY() const {
    return y;
}
void Point::setY(double Y) {
    y = Y;
}

//Methods
double Point::distanceToPoint(Point _point) {
    double _x = _point.x - x;
    double _y = _point.y - y;
    return sqrt((_x*_x)+(_y*_y));
}
double Point::distanceToCoordinate(double x, double y) {
    return distanceToPoint(Point(x, y));
}
double Point::distanceToZero() {
    return distanceToCoordinate(0, 0);
}