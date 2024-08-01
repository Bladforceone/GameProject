//
// Created by nezna on 20.07.2024.
//

#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H
enum Buttons {
    UpButton = 1 << 0,
    LeftButton = 1 << 1,
    DownButton = 1 << 2,
    RightButton = 1 << 3,
    EscButton = 1 << 4,
};

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
