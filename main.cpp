#include "raylib.h"

#include "src/entity/character.h"
#include "src/core/game.h"
#include "src/scene/scene.h"

int main(){
    Game ctx;
    InitContext(&ctx);

    InitWindow(ctx.screenWidth,ctx.screenHeight,ctx.title);
    SetTargetFPS(60);
    Player MainPlay("MainPlayer",LoadTexture("resources/scarfy.png"),{380.0f,250.0f});
    
    while(!WindowShouldClose()){
        MainPlay.MoveFunction();

        BeginDrawing();
        ClearBackground(WHITE);
        MainPlay.Draw();
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
