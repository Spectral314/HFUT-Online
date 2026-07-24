//character.cpp
#include "character.h"
#include "raylib.h"
Character::Character(const char* name, Texture2D Ingredient,Vector2 pos)
{
    Name = name;
    Ingr = Ingredient;
    Pos = pos;
    itcRec = { 0.0f, 0.0f, (float)Ingr.width/6, (float)Ingr.height };
}


void Character::Draw()
{
    DrawTextureRec(Ingr,itcRec,Pos,WHITE);
}