#include <raylib.h>

#include "Window.hpp"
#include "Player.hpp"
#include "Map.hpp"
#include "Box.hpp"
#include "AEntity.hpp"
#include "EntityManager.hpp"
#include "GameManager.hpp"

int main(void)
{
    Window win({.x = 800, .y = 450}, "raylib-test");
    win.open();

    Map map(2000);
    Camera2D cam({ 0 });

    cam.zoom = 1.0f;
    cam.offset = { .x = win.getSize().x / 2.0f, .y = win.getSize().y / 2.0f };

    Player bob = Player("Bob");
    bob.setPosition({.x = 290, .y = 0});

    GameManager gameState = GameManager(&map, &bob);

    SetTargetFPS(60);
    while (win.isOpen())
    {
        gameState.update(GetFrameTime());
        cam.target = bob.getPosition(); // TODO encapsulate cam

        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            DrawFPS(0, 0);

            BeginMode2D(cam);
            {
                gameState.draw();
            }
            EndMode2D();

        }
        EndDrawing();
    }

    return 0;
}