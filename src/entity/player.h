//player.h
#pragma once
#include "character.h"
#include "raylib.h"
enum state {IDLE, MOVE, HIDE};

class Player : public Character
{
    private:
        // Texture
        Texture2D MoveRight;
        Texture2D MoveLeft ;

        // Animation Component 运动动画组件
        int currentFrame= 0;  //当前帧（当前动作）
        int framesCounter= 0;  //帧数
        int framesSpeed = 8;  //运动速度

        state State;
    public:
        
        Player(const char* name, Texture2D Ingredient, Vector2 pos);

        //获取player坐标
        Vector2 getPlayerPos(){return Pos;}

        //运动
        void MoveFunction(); 
        
};