// Created by Vladislav

#ifndef TEST_GAME_WINDOW_H
#define TEST_GAME_WINDOW_H


#include "SFML/Graphics.hpp"
class Window : public sf::RenderWindow {
public:
    // Удаляем конструктор копирования и оператор присваивания
    Window(const Window& other) = delete;
    void operator=(const Window&) = delete;

    // Статический метод для получения экземпляра Window
    static Window* getInstance();

private:
    // Приватный конструктор
    Window();

    // Статический член класса для хранения единственного экземпляра Window
    static Window* window_;
};

#endif //TEST_GAME_WINDOW_H
