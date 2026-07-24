//scene.cpp
#include "scene.h"

scene current_scene = DOMITORY;

void DrawBackground(Game* ctx)
{
    DrawTexture(ctx->Background,2,2,GREEN);
}