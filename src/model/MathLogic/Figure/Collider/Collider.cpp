//
// Created by Nikita Krylskii.
//

#include "Collider.h"
// Constructors
Collider::Collider() {}

// Destructors
Collider::~Collider() {
    mass_figures.clear();
}

// Getters && Setters
const std::vector<Figure *> &Collider::getMassFigures() const {
    return mass_figures;
}
void Collider::setMassFigures(const std::vector<Figure *> &massFigures) {
    mass_figures = massFigures;
}

//Methods
void Collider::add_figure_collider(Figure* _figure) {
    Collider::mass_figures.push_back(_figure);
}
void Collider::delete_figure_in_collider(int _index_el_figure) {
    mass_figures.erase(mass_figures.begin() + _index_el_figure);
}