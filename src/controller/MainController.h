//
// Created by nezna on 20.07.2024.
//

#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H
#include "../main.cpp"

class MainController {
public:
    MainController();
    MainController(MainController* controller);

    MainController *getCurrentController() const;

    void setCurrentController(MainController *currentController);

    virtual void change_state() = 0;

    virtual void update();


private:
    MainController* currentController;
};



#endif //MAINCONTROLLER_H
