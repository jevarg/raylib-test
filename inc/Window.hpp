#pragma once

#include <string>
#include <raylib.h>

class Window
{
private:
    int mWidth;
    int mHeight;
    std::string mTitle;

public:
    Window(const int width, const int height, const std::string &title);
    ~Window();

    void open();
    void close();
    bool isOpen();
};