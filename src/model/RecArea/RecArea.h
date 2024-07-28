//
// Created by Nikita Krylskii.
//

#include "../Point/Point.h"
#ifndef TEST_GAME_RECAREA_H
#define TEST_GAME_RECAREA_H

class RecArea {
public:

    // Constructors
    RecArea();
    RecArea(Point _point);
    RecArea(Point _point,double w,double h);
    RecArea(double x,double y,double w,double h);
    RecArea(RecArea& _recArea);

    // Destructors
    ~RecArea();

    // Getters && Setters
    const Point& getPointRecArea() const;
    void setPointRecArea(const Point &pointRecArea);
    double getWidthRecArea() const;
    void setWidthRecArea(double widthRecArea);
    double getHeightRecArea() const;
    void setHeightRecArea(double heightRecArea);

    //Methods

private:
    Point point_RecArea;
    double width_RecArea;
    double height_RecArea;
};

#endif //TEST_GAME_RECAREA_H
