#include "Window.hpp"
#include "Player.hpp"

int main(void)
{
    Window win = Window(800, 450, "raylib-test");
    win.open();

    Player bob = Player("Bob");
    bob.setPosition({.x = 100, .y = 100});

    SetTargetFPS(60);
    while (win.isOpen())
    {
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            // DrawFPS(0, 0);

            bob.update();
            bob.draw();
        }
        EndDrawing();
    }

    return 0;
}