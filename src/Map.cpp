#include "Map.hpp"
#include "Box.hpp"

Map::Map(float width)
{
    mRect = {
        .x = 0,
        .y = 400,
        .width = width,
        .height = 50
    };
}

void Map::draw()
{
    DrawRectangleRec(mRect, GREEN);
}

void Map::checkCollisions(Player *player)
{
    player->setInAir(((player->getPosition().y + player->getBoundingBox().height) < mRect.y));
}