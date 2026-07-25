#include "raylib.h"

#include "src/entity/character.h"
#include "src/core/game.h"
#include "src/scene/scene.h"
#include "src/entity/item.h"

int main(){
    Game ctx;
    InitContext(&ctx);
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(ctx.screenWidth,ctx.screenHeight,ctx.title);
    
    //在InitWindow之后加载Texture!!!
    InitBackground(&ctx);

    SetTargetFPS(60);
    Player MainPlay("MainPlayer",LoadTexture("resources/scarfy/scarfy_right.png"),ctx.playerPos);
    Item Dish("woc",LoadTexture("resources/dish/Geniusdish1.png"),LoadTexture("resources/dish/Geniusdish2.png"));
    while(!WindowShouldClose()){
        MainPlay.MoveFunction();
        
        BeginDrawing();
        ClearBackground(WHITE);
        
        BeginMode2D(ctx.camera);
        ctx.adjustSmoothCamera(&MainPlay);
        DrawBackground(&ctx);
        
        MainPlay.Draw();
        
        Dish.Draw();

        EndMode2D();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
