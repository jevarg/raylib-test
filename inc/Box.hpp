#pragma once

#include <raylib.h>
#include "AEntity.hpp"
#include "Size.hpp"

class Box: public AEntity
{
private:
    Color mColor;
    int mSize;
    Rectangle mBoundingBox;

public:
    Box(int size, const Color &color = VIOLET);
    ~Box(){};

    void draw();
    void update() override;
    
    const Rectangle &getBoundingBox() const;
    void setColor(const Color &color);
};