//
// Created by Vladislav
//
#ifndef TEST_GAME_GAMEOBJECT_H
#define TEST_GAME_GAMEOBJECT_H
#include "../Object.h"
#include "../Figure/Figure.h"
#include "../RecArea/RecArea.h"

class GameObject : public Object{
public:
    GameObject();
    virtual void update() = 0;
private:
    Figure* colider;
    RecArea* recArea;
};


#endif //TEST_GAME_GAMEOBJECT_H
