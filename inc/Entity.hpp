#pragma once

#include <raylib.h>

class Entity
{
protected:
    Vector2 mPos;

public:
    Entity(const Vector2 &pos = { .x = 0, .y = 0 });
    ~Entity(){};

    virtual void update() = 0;
    virtual void draw() = 0;

    void setPosition(const Vector2 &pos);
    const Vector2 &getPosition();
};