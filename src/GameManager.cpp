#include <ctime>
#include "GameManager.hpp"
#include "Box.hpp"

GameManager::GameManager(Map *map, Player *player)
{
    mMap = map;
    mPlayer = player;

    Box *b = new Box(100, BLUE);
    b->setPosition({
        .x = 200,
        .y = 400.0f - 100
    });

    mEntities.push_back(b);
}

void GameManager::update(float delta)
{
    Vector2 movement = {0};

    if (IsKeyDown(KEY_A))
    {
        movement.x = -1;
    }

    if (IsKeyDown(KEY_D))
    {
        movement.x = 1;
    }

    if (mPlayer->isInAir() && !IsKeyDown(KEY_SPACE))
    {
        movement.y = 1;
    }
    else if (!mPlayer->isInAir() && IsKeyDown(KEY_SPACE))
    {
        movement.y = -1;
    }

    mPlayer->move(movement);
    mMap->checkCollisions(mPlayer);

    for (Box *e : mEntities)
    {
        e->update();
    }
}

void GameManager::draw()
{
    mMap->draw();
    mPlayer->draw();

    for (Box *e : mEntities)
    {
        e->draw();
    }
}