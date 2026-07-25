//game.cpp
#include "game.h"
#include "../scene/scene.h"
#include "raylib.h"
#include "raymath.h"

extern scene current_scene;

void Game::adjustSmoothCamera(Player* player){
    float dt = GetFrameTime();

    smoothC.currentPos = camera.target;
    smoothC.targetPos  = player->getPlayerPos();
    
    Vector2 delta = smoothC.targetPos - smoothC.currentPos;
    Vector2 acceleration = delta * smoothC.stiffness;

    smoothC.velocity += acceleration * dt;
    smoothC.velocity *= smoothC.damping;

    smoothC.currentPos += smoothC.velocity * dt;
    camera.target = smoothC.currentPos;
}

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
    ctx -> Background   = LoadTexture("resources/Domitory1.png");
}
