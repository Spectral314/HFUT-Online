//player.cpp
#include "player.h"

Player::Player(const char* name, Texture2D Ingredient, Vector2 pos):Character(name, Ingredient, pos),State(IDLE){}

void Player::MoveFunction()
{
    State = IDLE;
    if (IsKeyDown(KEY_A)) {Pos.x--;State = MOVE;}
    if (IsKeyDown(KEY_D)) {Pos.x++;State = MOVE;}
    if (IsKeyDown(KEY_S)) {Pos.y++;State = MOVE;}
    if (IsKeyDown(KEY_W)) {Pos.y--;State = MOVE;}

    if (State == MOVE){
        framesCounter++;
        if (framesCounter >= (60/framesSpeed)){
            framesCounter = 0;
            currentFrame++;
            if (currentFrame > 5) currentFrame = 0;
            itcRec.x = (float)currentFrame*(float)Ingr.width/6;
        }
    }

    if (State == IDLE){
        currentFrame  = 0;  
        framesCounter = 0;
    }
}