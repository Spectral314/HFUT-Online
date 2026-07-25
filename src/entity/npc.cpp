//npc.cpp
#include "raylib.h"
#include "npc.h"

NPC::NPC(const char* name, Texture2D Ingredient, Vector2 pos, Texture2D Ingredient_1, Texture2D Ingredient_2):Character(name, Ingredient, pos),Ingr_1(Ingredient_1),Ingr_2(Ingredient_2){}

void NPC::actionTransition(){
    framesCounter++;
        if (framesCounter >= (60/framesSpeed)){
            framesCounter = 0;
            currentFrame++;
            if (currentFrame > 1) currentFrame = 0;
            if(Ingr.id == 0) TraceLog(LOG_ERROR,"wrong");
            if (currentFrame == 0) Ingr = Ingr_1;
            else Ingr = Ingr_2;
        }
}

void NPC::DrawSlice(){
    DrawTexture(Ingr,Pos.x,Pos.y,WHITE);
}