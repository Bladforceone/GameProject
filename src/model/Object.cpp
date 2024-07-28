//
// Created by Vladislav
//

#include "Object.h"
Object::Object() : tag(0), type("NULL") {

}

int Object::getTag() const {
    return tag;
}

void Object::setTag(int tag) {
    Object::tag = tag;
}

const std::string &Object::getType() const {
    return type;
}

void Object::setType(const std::string &type) {
    Object::type = type;
}