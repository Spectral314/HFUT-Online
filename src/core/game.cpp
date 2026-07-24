//game.cpp
#include "game.h"
#include "../scene/scene.h"
#include "raylib.h"

extern scene current_scene;

void InitContext(Game* ctx){
    ctx -> screenWidth  = 800;
    ctx -> screenHeight = 450;
    ctx -> title        = "HFUT Online Launcher";
    ctx -> playerPos    = {100,100};
    ctx -> camera       = {0};
    ctx -> deltaTime    = 0.0f;
    current_scene       = DOMITORY;

    
}

