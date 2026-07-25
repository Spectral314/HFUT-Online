//npc.h
#pragma once
#include "raylib.h"
#include "character.h"

class NPC:public Character{
    private:
        // Texture
        Texture2D Ingr_1;
        Texture2D Ingr_2 ;

        
        int currentFrame= 0;  //当前帧（当前动作）
        int framesCounter= 0;  //帧数  （动作链中的第几个动作）
        int framesSpeed = 4;  //运动速度

    public:
        NPC(const char* name, Texture2D Ingredient, Vector2 pos, Texture2D Ingredient_1, Texture2D Ingredient_2);
        void actionTransition();
        void DrawSlice();
};