//
// Created by Vladislav
//

#ifndef TEST_GAME_GAMEVIEW_H
#define TEST_GAME_GAMEVIEW_H

#include <map>
#include "ObjectView.h"
#include "Window.h"
#include "ButtonChecker.h"

class GameView {
public:
    GameView();

    unsigned int CheckButtons();

    const std::map<int, ObjectView *> &getStackView() const;

    void setStackView(const std::map<int, ObjectView *> &stackView);

private:
    std::map<int, ObjectView *> stack_view;
    Window *window;
    ButtonChecker *buttonChecker;
};

#endif //TEST_GAME_GAMEVIEW_H
