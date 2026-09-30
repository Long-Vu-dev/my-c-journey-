# include <raylib.h>
# include <stdio.h>

// - hàm tạo vị trí

void initpos(float arr[], int n){
    for(int i = 0 ; i < n ;i ++){
        arr[i] = 100 + i*100;
    }
}
// - ham di chuyển các hình tròn

void move(float arr[], int n, float dt){
    for(int i =0 ; i <n ; i++){
        arr[i] +=100 * dt;
    }
}

// - hàm vẽ các hình tròn
void draw(float arr[], int n ){
    for (int i = 0 ; i < n ; i++){
        int y = 50 + i * 80;
        DrawCircle(arr[i], y , 40, BLUE);
    }
}

int main(){
    InitWindow(1200, 900, "My First Raylib Game");
    float arr[5];
    initpos(arr,5); // vi tri ban dau
    while (!WindowShouldClose()){
        float dt = GetFrameTime();
        move(arr,5,dt); // di chuyển các hình tròn
        BeginDrawing();
        ClearBackground(BLACK);
        draw(arr,5); // vẽ các hình tròn
        EndDrawing();
    }
}
