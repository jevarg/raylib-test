#include "Window.hpp"

Window::Window(const int width, const int height, const std::string &title)
{
    mWidth = width;
    mHeight = height;
    mTitle = title;
}

Window::~Window()
{
    close();
}

void Window::open()
{
    InitWindow(mWidth, mHeight, mTitle.c_str());
}

void Window::close()
{
    if (!IsWindowReady())
    {
        return;
    }

    CloseWindow();
}

bool Window::isOpen()
{
    return !WindowShouldClose();
}