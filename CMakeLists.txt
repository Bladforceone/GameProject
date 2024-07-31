cmake_minimum_required(VERSION 3.23)
project(GameProject)

set(CMAKE_CXX_STANDARD 26)

# Установить путь к SFML
set(SFML_DIR ${CMAKE_SOURCE_DIR}/include/SFML/lib/cmake/SFML)
# Хз что за строчка но она помогла (Директива set(SFML_STATIC_LIBRARIES TRUE) используется для указания CMake,
# что вы хотите использовать статические библиотеки SFML вместо динамических. Это значит, что все необходимые компоненты
# библиотеки SFML будут встроены в ваш исполняемый файл, а не подключаться во время выполнения программы как отдельные
#.dll (Windows) или .so (Linux) файлы.
set(SFML_STATIC_LIBRARIES TRUE)

# Добавить исполняемый файл для проекта
add_executable(GameProject src/main.cpp
        src/controller/MainController.cpp
        src/controller/MainController.h
        src/model/Object.h
        src/model/Object.cpp
        src/model/GameObject/GameObject.h
        src/model/GameObject/GameObject.cpp
        src/model/GameObject/Sprite/Sprite.h
        src/model/GameObject/Sprite/Sprite.cpp
        src/view/GameView.h
        src/view/GameView.cpp
        src/view/ObjectView.h
        src/view/ObjectView.cpp
        src/view/Window.h
        src/view/Window.cpp
        src/view/ButtonChecker.h
        src/view/ButtonChecker.cpp src/model/Point/Point.cpp src/model/Point/Point.h src/model/RecArea/RecArea.cpp src/model/RecArea/RecArea.h src/model/Figure/Figure.cpp src/model/Figure/Figure.h src/model/Figure/Collider/Collider.cpp src/model/Figure/Collider/Collider.h
        src/controller/GameController.h
        src/controller/GameController.cpp
        src/controller/GameWorld.h
        src/controller/GameWorld.cpp)

# Найти и подключить компоненты SFML
find_package(SFML COMPONENTS graphics audio REQUIRED)

# Подключить библиотеки SFML к исполняемому файлу
target_link_libraries(GameProject PRIVATE sfml-graphics sfml-audio)