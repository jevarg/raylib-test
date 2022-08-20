#include "Window.hpp"

Window::Window(const Vector2 &size, const std::string &title)
{
    mSize = size;
    mTitle = title;
}

Window::~Window()
{
    close();
}

void Window::open()
{
    InitWindow(mSize.x, mSize.y, mTitle.c_str());
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

Vector2 Window::getSize() const
{
    return mSize;
}