//
// Created by Vladislav
//

#include "GameView.h"

unsigned int GameView::CheckButtons() {
    unsigned int mask;
    sf::Event event;
    if (event.key.code == sf::Keyboard::A) {
        mask |= UpButton;
    }
    if (event.key.code == sf::Keyboard::L) {
        mask |= LeftButton;
    }
    if (event.key.code == sf::Keyboard::D) {
        mask |= DownButton;
    }
    if (event.key.code == sf::Keyboard::R) {
        mask |= RightButton;
    }
    if (event.key.code == sf::Keyboard::Escape) {
        mask |= EscButton;
    }
    return mask;
}