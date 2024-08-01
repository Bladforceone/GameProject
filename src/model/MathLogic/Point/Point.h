//
// Created by Nikita Krylskii.
//

#ifndef TEST_GAME_POINT_H
#define TEST_GAME_POINT_H

class Point {
public:

    // Constructors
    Point();
    Point(double xy);
    Point(double x, double y);
    Point(const Point& _point);

    // Destructors
    ~Point();

    // Getters && Setters
    double getX() const;
    void setX(double X);
    double getY() const;
    void setY(double Y);

    //Methods
    double distanceToCoordinate(double x, double y);
    double distanceToPoint(Point point);
    double distanceToZero();

private:
    double x;
    double y;
};

#endif //TEST_GAME_POINT_H
