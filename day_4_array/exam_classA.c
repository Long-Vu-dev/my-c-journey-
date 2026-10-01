#include <stdio.h>
#include <raylib.h>

void vitri(float arr[], int n){
    for(int i = 0 ; i < n ; i++){
        arr[i] = 100 + i*100;
    }
}
void move(float arr[], int n, float dt){
    for(int i = 0 ; i < n ; i++){
        arr[i] += 100 * dt;
    }
}

void changeColor(float arr[], int n ){
    for(int i = 0 ; i < n ; i++){  
        Color color;
        if (i == 0){color = RED;}
        else if (i == 1)color = GREEN;
        else if (i == 2)color = BLUE;
        else if (i == 3)color = YELLOW;
        else {color = PURPLE;}
    
    DrawCircle(arr[i], 255, 40, color);
    }
}
    


int main(){
    InitWindow(1200, 900, "My Raylib Game");
    float arr[5];
    vitri(arr, 5);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        
        changeColor(arr, 5);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}