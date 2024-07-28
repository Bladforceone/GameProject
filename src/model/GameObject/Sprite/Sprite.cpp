//
// Created by Vladislav
//

#include "Sprite.h"
Sprite::Sprite() : HealthPoint(100), GameObject(){

}
int Sprite::getHealthPoint() const {
    return HealthPoint;
}

void Sprite::setHealthPoint(int healthPoint) {
    HealthPoint = healthPoint;
}