#include "AEntity.hpp"

AEntity::AEntity(const Vector2 &pos)
{
    mPos = pos;
}

void AEntity::setPosition(const Vector2 &pos)
{
    mPos = pos;
}

const Vector2 &AEntity::getPosition()
{
    return mPos;
}
