//
// Created by Vladislav
//

#ifndef TEST_GAME_SPRITE_H
#define TEST_GAME_SPRITE_H

#include "../GameObject.h"

class Sprite : public GameObject {
public:
    Sprite();

    virtual void update() = 0;

private:
    int HealthPoint{}; //По умолчанию 100хп
protected:
    virtual void move() = 0;

    int getHealthPoint() const;

    void setHealthPoint(int healthPoint);
};


#endif //TEST_GAME_SPRITE_H
