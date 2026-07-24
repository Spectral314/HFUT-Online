//game.cpp
#include "game.h"
#include "../scene/scene.h"
#include "raylib.h"

extern scene current_scene;

void InitContext(Game* ctx){
    ctx -> screenWidth  = 800;
    ctx -> screenHeight = 600;
    ctx -> title        = "HFUT Online Launcher";
    ctx -> playerPos    = {400,300};
    ctx -> camera       = {0};
    ctx -> deltaTime    = 0.0f;
    current_scene       = DOMITORY;
    
    ctx -> camera.target   = {400,300};
    ctx -> camera.offset   = {400,300};
    ctx -> camera.rotation = 0.0f;
    ctx -> camera.zoom     = 1.0f;

}

void InitBackground(Game* ctx){
    ctx -> Background   = LoadTexture("resources/plain.png");
}
