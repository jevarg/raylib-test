#pragma once

#include <raylib.h>
#include <string>

#include "AEntity.hpp"

class Player: public AEntity
{
private:
    static const int JUMP_HEIGHT = 20;
    static const int MOVEMENT_SPEED = 2;

    float mWeight;
    std::string mName;
    Texture2D mTexture;
    Rectangle mBoundingBox;
    Vector2 mVelocity;
    bool mInAir;

public:
    Player(const std::string &name);
    ~Player(){};

    void move(const Vector2 &direction);
    void update();
    void draw();

    bool isInAir() const;
    void setInAir(bool inAir);

    void setPosition(const Vector2 &pos);
    const Rectangle &getBoundingBox() const;
    void setVelocity(const Vector2 &velocity);
};