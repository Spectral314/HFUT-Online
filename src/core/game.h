//game.h
#pragma once
#include "../src/entity/player.h"
#include "raylib.h"

struct SmoothCamera{
    Vector2 currentPos;
    Vector2 velocity;
    Vector2 targetPos;
    float stiffness = 8.0f;
    float damping   = 0.92f;
};

struct Game{
    int screenWidth;
    int screenHeight;
    const char* title;

    float deltaTime;
    
    Vector2 playerPos;
    Camera2D camera;
    SmoothCamera smoothC;
    Texture2D Background;

    void adjustSmoothCamera(Player* player);
};
void InitContext(Game* ctx);
void InitBackground(Game* ctx);