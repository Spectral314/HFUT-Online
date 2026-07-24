//character.h
#pragma once
#include "raylib.h"

class Character
{
    protected:
        const char* Name;           //角色名称
        Texture2D Ingr;       //角色素材
        Vector2 Pos;          //角色位置
        Rectangle itcRec;     //截取矩形 截取素材中的每一帧动作


    public:
        Character(const char* name, Texture2D Ingredient, Vector2 pos);

        //绘制人物
        void Draw();
};