//
// Created by Vladislav
//
#include <map>
#include "ObjectView.h"
#include "Window.h"
#include "../controller/MainController.h"
#include "SFML/Graphics.hpp"
class GameView {
public:
    unsigned int CheckButtons();
private:
    std::vector<std::map<int, ObjectView *>> stack_view;
    Window *window;
};
