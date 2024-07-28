//
// Created by Nikita Krylskii.
//

#include "Point.h"
#include <cmath>

// Constructors
Point::Point() : Point(0,0) {}
Point::Point(double xy) : Point(xy,xy) {}
Point::Point(double x, double y) {
    Point::point_x = x;
    Point::point_y = y;
}
Point::Point(Point& _point) {
    point_x = _point.point_x;
    point_y = _point.point_y;
}

// Destructors
Point::~Point() {}

// Getters && Setters
double Point::getPointX() const {
    return point_x;
}
void Point::setPointX(double pointX) {
    point_x = pointX;
}
double Point::getPointY() const {
    return point_y;
}
void Point::setPointY(double pointY) {
    point_y = pointY;
}

//Methods
double Point::Distance_to_point(Point _point) {
    double _x = _point.point_x - point_x;
    double _y = _point.point_y - point_y;
    return sqrt((_x*_x)+(_y*_y));
}
double Point::Distance_to_koordinate(double x, double y) {
    return Distance_to_point(Point(x,y));
}
double Point::Distance_to_zero() {
    return Distance_to_koordinate(0,0);
}