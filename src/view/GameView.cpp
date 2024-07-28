//
// Created by Vladislav
//

#include "GameView.h"

GameView::GameView() {
}

const std::map<int, ObjectView *> &GameView::getStackView() const {
    return stack_view;
}

void GameView::setStackView(const std::map<int, ObjectView *> &stackView) {
    stack_view = stackView;
}

unsigned int GameView::CheckButtons() {
    return buttonChecker->CheckButton();
}
