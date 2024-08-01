//
// Created by Nikita Krylskii.
//

#include "../../MathLogic/Point/Point.h"
#ifndef TEST_GAME_FIGURE_H
#define TEST_GAME_FIGURE_H

class Figure {
public:

    // Constructors
    Figure();
    Figure(double _alpha_rotate);
    Figure(Figure& _figure);

    // Destructors
    ~Figure();

    // Getters && Setters
    virtual double getAlphaRotate() const;
    virtual void setAlphaRotate(double alphaRotate);

    //Methods
    virtual void rotate(double _alpha_rotate) = 0;
    virtual void scale(double _koefX,double _koefY) = 0;
    virtual void check_collsion(Figure& _figure) = 0;
    virtual void update_figure() = 0;

private:
    double alpha_rotate = 0;
};

#endif //TEST_GAME_FIGURE_H
