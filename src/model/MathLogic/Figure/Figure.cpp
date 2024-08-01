//
// Created by Nikita Krylskii.
//

#include "Figure.h"

// Constructors
Figure::Figure() : Figure(0) {}
Figure::Figure(double _alpha_rotate) {
    Figure::alpha_rotate = _alpha_rotate;
}
Figure::Figure(Figure &_figure) {
    Figure::alpha_rotate = _figure.alpha_rotate;
}

// Destructors
Figure::~Figure() {}

// Getters && Setter
double Figure::getAlphaRotate() const {
    return alpha_rotate;
}
void Figure::setAlphaRotate(double alphaRotate) {
    alpha_rotate = alphaRotate;
}

//Methods
