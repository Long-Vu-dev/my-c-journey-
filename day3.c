# include "raylib.h"

int main(){
    InitWindow(1200, 900, "My First Raylib Game");
    int y = 225 ;
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        for (int i = 0 ; i < 10 ; i++){
            float x = 100 + i * 80;
            DrawCircle(x, y, 30, BLUE);
            
        }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}