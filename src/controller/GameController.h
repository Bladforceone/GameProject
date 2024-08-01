//
// Created by ymfor on 01.08.2024.
//

#ifndef GAMEPROJECT_GAMECONTROLLER_H
#define GAMEPROJECT_GAMECONTROLLER_H

#include "MainController.h"
#include "../model/GameObject/GameObject.h"
#include "map"
#include "GameWorld.h"
#include "../view/GameView.h"


class GameController : public MainController {
public:
    GameController();
    GameController(GameWorld* OtherModelObjects, GameView* OtherViewObjects);

    void gameCicle();

    void update() override;

private:
    GameWorld* modelObjects;
    GameView* viewObjects;
    float time;
};


#endif //GAMEPROJECT_GAMECONTROLLER_H
