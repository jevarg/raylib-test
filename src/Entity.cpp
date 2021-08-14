#include "Entity.hpp"

Entity::Entity(const Vector2 &pos)
{
    mPos = pos;
}

void Entity::setPosition(const Vector2 &pos)
{
    mPos = pos;
}

const Vector2 &Entity::getPosition()
{
    return mPos;
}