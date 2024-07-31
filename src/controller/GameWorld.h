//
// Created by ymfor on 01.08.2024.
//

#ifndef GAMEPROJECT_GAMEWORLD_H
#define GAMEPROJECT_GAMEWORLD_H


#include <vector>
#include "../model/GameObject/GameObject.h"

class GameWorld {
public:
    GameWorld();
    void update();
private:
    std::vector<GameObject*> objects;
};


#endif //GAMEPROJECT_GAMEWORLD_H
