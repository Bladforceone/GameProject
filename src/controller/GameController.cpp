//
// Created by ymfor on 01.08.2024.
//

#include "GameController.h"

GameController::GameController() {

}

void GameController::game_cicle() {
    ModelObjects->update_state();
    ModelObjects->update_view();
}

GameController::GameController(GameWorld *OtherModelObjects, GameView *OtherViewObjects) {

}

void GameController::update() {
    game_cicle();
}

