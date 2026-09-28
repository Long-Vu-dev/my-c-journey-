# include "raylib.h"

int main(){
    // tạo mảng
    float arr[5] ;
    for(int i = 0 ; i < 5 ; i++){
        arr[i] = 100 + i *100;
    }
    InitWindow(1200, 900, "My First Raylib Game");
    
    while (!WindowShouldClose()){
        float dt = GetFrameTime();
        // di chuyển các hình tròn
        for(int i = 0 ; i < 5 ; i++){
            arr[i] += 100 * dt;
        }
        BeginDrawing();
        ClearBackground(BLACK);
        for (int i = 0 ; i < 5 ; i++){
            
            // float y = 50 + i * 80;
            DrawCircle(arr[i], 255, 40, BLUE);
        }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}