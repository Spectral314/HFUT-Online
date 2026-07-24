//scene.cpp
#include "scene.h"

scene current_scene = DOMITORY;

void setBackground()
{
    ClearBackground(BLACK);
    if(current_scene == DOMITORY)
    {
        
        Texture2D bkg_DOM = LoadTexture("resources/back.png");
        DrawTexture(bkg_DOM,0,0,WHITE);
    }
}