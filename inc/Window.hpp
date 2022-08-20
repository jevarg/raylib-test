#pragma once

#include <string>
#include <raylib.h>

class Window
{
private:
    Vector2 mSize;
    std::string mTitle;

public:
    Window(const Vector2 &size, const std::string &title);
    ~Window();

    void open();
    void close();
    bool isOpen();
    
    Vector2 getSize() const;
};