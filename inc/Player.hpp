#pragma once

#include <raylib.h>
#include <string>

#include "Entity.hpp"

class Player: public Entity
{
private:
    std::string mName;
    Color mColor;

public:
    Player(const std::string &name, const Color &color = BLACK);
    ~Player(){};

    void update() override;
    void draw() override;
};