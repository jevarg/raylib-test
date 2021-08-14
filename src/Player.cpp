#include "Player.hpp"

Player::Player(const std::string &name, const Color &color) : Entity()
{
    mColor = color;
    mName = name;
}

// TODO: Use system of normalized vec2 to map input
// e.g.: KEY_W --> Vector2(0, -1)
void Player::update()
{
    if (IsKeyDown(KEY_A))
    {
        mPos.x -= 1;
    }

    if (IsKeyDown(KEY_D))
    {
        mPos.x += 1;
    }

    if (IsKeyDown(KEY_S))
    {
        mPos.y += 1;
    }

    if (IsKeyDown(KEY_W))
    {
        mPos.y -= 1;
    }
}

void Player::draw()
{
    DrawRectangle(mPos.x, mPos.y, 20, 50, mColor);
}