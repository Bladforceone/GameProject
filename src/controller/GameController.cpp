//
// Created by ymfor on 01.08.2024.
//

#include "GameController.h"

GameController::GameController() {

}

void GameController::gameCicle() {
    modelObjects->update_state();
    modelObjects->update_view();
}

GameController::GameController(GameWorld *OtherModelObjects, GameView *OtherViewObjects) {

}

void GameController::update() {
    gameCicle();
}

