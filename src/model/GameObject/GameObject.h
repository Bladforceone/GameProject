//
// Created by Vladislav
//
#ifndef TEST_GAME_GAMEOBJECT_H
#define TEST_GAME_GAMEOBJECT_H
#include "../Object.h"
#include "../MathLogic/Figure//Figure.h"
#include "../MathLogic/RecArea/RecArea.h"

class GameObject : public Object{
public:
    GameObject();
    virtual void update() = 0;
private:
    Figure* colider;
};


#endif //TEST_GAME_GAMEOBJECT_H
