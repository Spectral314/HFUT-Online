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

    Texture2D Background;
};
void InitContext(Game* ctx);
void InitBackground(Game* ctx);