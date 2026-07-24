//game.h
#pragma once
#include "../src/entity/player.h"
#include "raylib.h"

struct Game{
    int screenWidth;
    int screenHeight;
    const char* title;

    float deltaTime;
    
    Vector2 playerPos;
    Camera2D camera;

};
void InitContext(Game* ctx);