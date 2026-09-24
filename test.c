#include "raylib.h"
#include <stdio.h>

int main()
{
    float plx = 100;
    float ply = 200;
    float speed = 200;
    
    InitWindow(800, 450, "day 2");
    while (!WindowShouldClose()){
        float dt = GetFrameTime();
        
        BeginDrawing();
        plx += speed * dt;
        ClearBackground(BLACK);
        DrawCircle(plx, ply, 50, BLUE);
        DrawText(TextFormat("FPS :%d", GetFPS()), 10, 10, 20, WHITE);
        EndDrawing(); 
    }
    CloseWindow();

    return 0;
}