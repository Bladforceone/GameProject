//
// Created by Nikita Krylskii.
//

#include "RecArea.h"

// Constructors
RecArea::RecArea() : RecArea(Point(),0,0) {}
RecArea::RecArea(Point _point) : RecArea(_point,0,0) {}
RecArea::RecArea(double x, double y, double w, double h) : RecArea(Point(x,y),w,h) {}
RecArea::RecArea(Point _point, double w, double h) {
    point_RecArea = _point;
    width_RecArea = w;
    height_RecArea = h;
}
RecArea::RecArea(RecArea &_recArea) {
    point_RecArea = _recArea.point_RecArea;
    width_RecArea = _recArea.width_RecArea;
    height_RecArea = _recArea.height_RecArea;
}

// Destructors
RecArea::~RecArea() {}

// Getters && Setters
const Point &RecArea::getPointRecArea() const {
    return point_RecArea;
}
void RecArea::setPointRecArea(const Point &pointRecArea) {
    point_RecArea = pointRecArea;
}
double RecArea::getWidthRecArea() const {
    return width_RecArea;
}
void RecArea::setWidthRecArea(double widthRecArea) {
    width_RecArea = widthRecArea;
}
double RecArea::getHeightRecArea() const {
    return height_RecArea;
}
void RecArea::setHeightRecArea(double heightRecArea) {
    height_RecArea = heightRecArea;
}

//Methods