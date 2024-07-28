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
    Point(Point& _point);

    // Destructors
    ~Point();

    // Getters && Setters
    double getPointX() const;
    void setPointX(double pointX);
    double getPointY() const;
    void setPointY(double pointY);

    //Methods
    double Distance_to_koordinate(double x, double y);
    double Distance_to_point(Point _point);
    double Distance_to_zero();

private:
    double point_x;
    double point_y;
};

#endif //TEST_GAME_POINT_H
