#pragma once

#include <raylib.h>

class AEntity
{
protected:
    Vector2 mPos;

public:
    AEntity(const Vector2 &pos = {.x = 0, .y = 0});
    ~AEntity(){};

    virtual void update(){}; // TODO: Add delta time
    virtual void draw() = 0;

    void setPosition(const Vector2 &pos);
    const Vector2 &getPosition();
};