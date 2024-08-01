//
// Created by Vladislav
//

#include "ObjectView.h"

ObjectView::ObjectView() : sf::Sprite(){

}

unsigned int ObjectView::getTag() const {
    return tag;
}

void ObjectView::setTag(unsigned int tag) {
    ObjectView::tag = tag;
}
