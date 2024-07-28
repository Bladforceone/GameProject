#include "Window.h"

// Инициализация статического члена класса
Window *Window::window_ = nullptr;

Window::Window() : sf::RenderWindow(sf::VideoMode(800, 600), "Singleton Window") {}

// Статический метод для получения экземпляра Window
Window *Window::getInstance() {
    if (window_ == nullptr) {
        window_ = new Window();
    }
    return window_;
}
