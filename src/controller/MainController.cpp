//
// Created by nezna on 20.07.2024.
//

#include "MainController.h"

MainController::MainController() {

}

MainController::MainController(MainController *controller) {
    currentController = controller;
}

MainController *MainController::getCurrentController() const {
    return currentController;
}

void MainController::setCurrentController(MainController *currentController) {
    currentController = currentController;
}

void MainController::update() {
    currentController->update();
}

