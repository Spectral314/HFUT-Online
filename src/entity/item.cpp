#include "item.h"
#include "raylib.h"
Item::Item(const char* name, Texture2D S1, Texture S2):Name(name),State1(S1),State2(S2){currentState = S1;}

void Item::Draw(){
    framesCounter++;
        if (framesCounter >= (60/framesSpeed)){
            framesCounter = 0;
            currentFrame++;
            if (currentFrame > 1) currentFrame = 0;
            if(currentFrame == 0) currentState = State1;
            else currentState = State2;
        }
    DrawTexture(currentState,0,0,WHITE);
}