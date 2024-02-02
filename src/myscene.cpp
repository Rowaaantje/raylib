#include "myscene.h"

MyScene::MyScene() 
{
    //constructor
    player = new Player();
}   

MyScene::~MyScene() 
{
	// deconstruct and delete the Tree
    delete player;
}

void MyScene::update(float deltaTime) 
{
    Movement(deltaTime);
}

void MyScene::Movement(float deltaTime)
{

    if (IsKeyDown(KEY_S)) player->position.y += 3.0f;
    else if (IsKeyDown(KEY_W)) player->position.y -= 3.0f;
    if (IsKeyDown(KEY_D)) player->position.x += 3.0f;
    else if (IsKeyDown(KEY_A)) player->position.x -= 3.0f;

    std::cout << "pos x " << player->position.x <<  "pos y " << player->position.y << std::endl;

}