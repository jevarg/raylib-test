#include "EntityManager.hpp"

const std::vector<AEntity *> &EntityManager::getEntities() const
{
    return mEntities;
}

void EntityManager::addEntity(AEntity *entity)
{
    mEntities.push_back(entity);
}

void EntityManager::update()
{
    // if (IsKeyDown(KEY_A))
    // {
    //     mPos.x -= 1;
    // }

    // if (IsKeyDown(KEY_D))
    // {
    //     mPos.x += 1;
    // }

    // if (IsKeyPressed(KEY_SPACE))
    // {
    //     mPos.y -= Player::JUMP_HEIGHT;
    // }
}