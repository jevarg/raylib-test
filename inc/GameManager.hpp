#pragma once

#include <vector>

#include "Box.hpp"
#include "Map.hpp"
#include "Player.hpp"

class GameManager
{
private:
    Map *mMap;
    Player *mPlayer;
    std::vector<Box *> mEntities;

public:
    GameManager(Map *,Player *);
    ~GameManager(){};

    void update(float delta);
    void draw();
};