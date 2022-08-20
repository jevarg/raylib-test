#include "Player.hpp"

Player::Player(const std::string &name) : AEntity()
{
    mName = name;
    mWeight = 5;

    mTexture = LoadTexture("assets/player/player.png");
    mBoundingBox = {
        .x = 0,
        .y = 0,
        .width = 32,
        .height = 64
    };
    mVelocity = {
        .x = Player::MOVEMENT_SPEED,
        .y = 1
    };
}

void Player::update()
{
}

void Player::draw()
{
    const int thiccness = 10;

    DrawRectangleLines(mBoundingBox.x, mBoundingBox.y, mBoundingBox.width, mBoundingBox.height, RED);
    DrawTextureRec(
        mTexture,
        {.x = 0, .y = 0, .width = 32, .height = 64 },
        mPos,
        WHITE
    );
}

bool Player::isInAir() const
{
    return mInAir;
}

void Player::setInAir(bool inAir)
{
    if (inAir == mInAir) {
        return;
    }

    mInAir = inAir;
}

void Player::move(const Vector2 &direction)
{
    if (direction.x)
    {
        mPos.x += direction.x * mVelocity.x;
        mBoundingBox.x = mPos.x;
    }

    if (direction.y)
    {
        mPos.y += direction.y * mWeight * mVelocity.y;
        mBoundingBox.y = mPos.y;
    }
}

const Rectangle &Player::getBoundingBox() const
{
    return mBoundingBox;
}

void Player::setVelocity(const Vector2 &velocity)
{
    mVelocity = velocity;
}

void Player::setPosition(const Vector2 &pos)
{
    AEntity::setPosition(pos);

    mBoundingBox.x = pos.x;
    mBoundingBox.y = pos.y;
}