//item.h
#include "raylib.h"
class Item{
    private:
        const char* Name;
        Texture2D currentState;
        Texture2D State1;
        Texture2D State2;

        int currentFrame  = 0;
        int framesCounter = 0;
        int framesSpeed   = 2;
    public:
        Item(const char* name, Texture2D S1, Texture S2);
        void Draw();
};