//
// Created by Nikita Krylskii.
//

#include <algorithm>
#include "../Figure.h"
#ifndef TEST_GAME_COLLIDER_H
#define TEST_GAME_COLLIDER_H


class Collider : public Figure {
public:

    // Constructors
    Collider();

    // Destructors
    ~Collider();

    // Getters && Setters
    const std::vector<Figure *> &getMassFigures() const;
    void setMassFigures(const std::vector<Figure *> &massFigures);

    //Methods
    void add_figure_collider(Figure* _figure);
    void delete_figure_in_collider(int _index_el_figure);

private:
    std::vector <Figure*> mass_figures = {};
};

#endif //TEST_GAME_COLLIDER_H
