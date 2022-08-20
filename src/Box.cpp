#include "Box.hpp"
#include <iostream>

Box::Box(int size, const Color &color): AEntity()
{
    mSize = size;
    mColor = color;
    mBoundingBox = {
        .x = mPos.x,
        .y = mPos.y,
        .width = (float) mSize,
        .height = (float) mSize
    };
}

void Box::update()
{
    mBoundingBox.x = mPos.x;
    mBoundingBox.y = mPos.y;
}

void Box::draw()
{
    DrawRectangle(mPos.x, mPos.y, mSize, mSize, mColor);
    // DrawRectangleRec(mBoundingBox, RED);
}

const Rectangle &Box::getBoundingBox() const
{
    return mBoundingBox;
}

void Box::setColor(const Color &color)
{
    mColor = color;
}