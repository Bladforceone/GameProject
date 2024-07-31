//
// Created by ymfor on 01.08.2024.
//

#include "GameWorld.h"

void GameWorld::update() {
    for (auto& object : objects) {
        object->update();
    }

}
