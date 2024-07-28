//
// Created by Vladislav
//

#ifndef TEST_GAME_OBJECT_H
#define TEST_GAME_OBJECT_H

#include "iostream"

class Object {
public:
    Object();

protected:
    int getTag() const;

    void setTag(int tag);

    const std::string &getType() const;

    void setType(const std::string &type);

private:
    ///значение для соединение с view
    int tag;
    ///значение для определение типа объекта
    std::string type;
};


#endif //TEST_GAME_OBJECT_H
