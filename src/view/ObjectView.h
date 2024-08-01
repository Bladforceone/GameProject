//
// Created by Vladislav
//
#include "SFML/Graphics/Sprite.hpp"

class ObjectView : public sf::Sprite{
public:
    ObjectView();
protected:
    unsigned int getTag() const;
    void setTag(unsigned int tag);
private:
    unsigned int tag;
};