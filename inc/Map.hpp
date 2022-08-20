#pragma once

#include <raylib.h>
#include <vector>

#include "AEntity.hpp"
#include "Player.hpp"

class Map
{
private:
    Rectangle mRect;

public:
    Map(float width);
    ~Map(){};

    void draw();
    // void draw();
    void checkCollisions(Player *player);
};