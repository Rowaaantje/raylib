#include "myscene.h"

//constructor
MyScene::MyScene() : Scene()
{
       
}

MyScene::~MyScene() 
{
	// deconstruct and delete the Tree
}

void MyScene::update(float deltaTime)
{
    Input(deltaTime);
}

void MyScene::Input(float deltaTime)
{
    if(IsKeyDown(KEY_W))
    {
        DrawText("i EAT CHEESCEEEE", 200, 200, 50, BLACK);
    }

    if(IsKeyDown(KEY_A))
    {
        DrawText("CUHhhhzz", 100, 100, 50, BLACK);
    }
}