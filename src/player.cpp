#include "player.h"

Player::Player() 
{
    //constructor
    Rectangle player = { position.x, position.y, 40, 40 };
    DrawRectangleRec(player, RED); //draw Rectangle
}   

Player::~Player() 
{
	// deconstruct and delete the Tree
}

void Player::update(float deltaTime) 
{

}
