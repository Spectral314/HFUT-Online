#include "raylib.h"

#include "src/entity/character.h"
#include "src/core/game.h"
#include "src/scene/scene.h"

int main(){
    Game ctx;
    InitContext(&ctx);
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(ctx.screenWidth,ctx.screenHeight,ctx.title);
    
    //在InitWindow之后加载Texture!!!
    InitBackground(&ctx);

    SetTargetFPS(60);
    Player MainPlay("MainPlayer",LoadTexture("resources/scarfy/scarfy_right.png"),ctx.playerPos);
    
    while(!WindowShouldClose()){
        MainPlay.MoveFunction();
        
        BeginDrawing();
        ClearBackground(WHITE);
        
        BeginMode2D(ctx.camera);
        ctx.camera.target = MainPlay.getPlayerPos();
        DrawBackground(&ctx);
        
        MainPlay.Draw();
        
        EndMode2D();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
