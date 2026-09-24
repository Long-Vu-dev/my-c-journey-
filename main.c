#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "My First Raylib Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawCircle(400, 225, 50, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}